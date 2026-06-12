package com.xxxx.server.config.security;

import com.xxxx.server.pojo.Admin;
import com.xxxx.server.service.IAdminService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Lazy;
import org.springframework.security.config.annotation.ObjectPostProcessor;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.builders.WebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.config.http.SessionCreationPolicy;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.security.web.access.intercept.FilterSecurityInterceptor;
import org.springframework.security.web.authentication.UsernamePasswordAuthenticationFilter;

import javax.annotation.Resource;

@Configuration
public class SecurityConfig extends WebSecurityConfigurerAdapter {
    @Resource
    @Lazy
    private IAdminService adminService;

    @Autowired
    @Lazy
    private RestAuthorizationEnrtyPoint restAuthorizationEnrtyPoint;

    @Autowired
    @Lazy
    private RestfulAccessDeniedHandel restfulAccessDeniedHandel;

    @Autowired
    @Lazy
    private CustomUrlDecisionManager customUrlDecisionManager;

    @Autowired
    @Lazy
    private CustomFilter customFilter;


    @Override
    public void configure(WebSecurity web) throws Exception {
        // 设置放行访问
        web.ignoring().antMatchers(
                "/login",
                "/logout",
                "/css/**",
                "/js/**",
                "/index.html",
                "favicon.ico",
                "/doc.html",
                "/webjars/**",
                "/swagger-resources/**",
                "/v2/api-docs/**",
                "/captcha"
        );
    }

    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        auth.userDetailsService(userDetailsService()).passwordEncoder(passwordEncoder());
    }

    @Override
    protected void configure(HttpSecurity http) throws Exception {
        // 使用JWT，不需要csrf
        http.csrf()
                // 禁用csrf
                .disable()
                // 基于Token， 不需要session
                .sessionManagement()
                .sessionCreationPolicy(SessionCreationPolicy.STATELESS)
                .and()
                .authorizeRequests()
//                // 允许登录访问
//                .antMatchers("/login", "/logout")
//                .permitAll()
                // 除了上面的请求，其他的都要认证
                .anyRequest()
                .authenticated()
                // 动态权限配置
                .withObjectPostProcessor(new ObjectPostProcessor<FilterSecurityInterceptor>() {
                    @Override
                    public <O extends FilterSecurityInterceptor> O postProcess(O object) {
                        object.setAccessDecisionManager(customUrlDecisionManager);
                        object.setSecurityMetadataSource(customFilter);
                        return object;
                    }
                })
                .and()
                // 禁用缓存
                .headers()
                .cacheControl();

        // 添加  JWT 登录授权过滤器
        http.addFilterBefore(jwtAuthencationTokenFilter(), UsernamePasswordAuthenticationFilter.class);

        // 添加自定义未授权和未登录结果的返回
        http.exceptionHandling()
                .accessDeniedHandler(restfulAccessDeniedHandel)
                .authenticationEntryPoint(restAuthorizationEnrtyPoint);
    }

    @Override
    @Bean
    public UserDetailsService userDetailsService() {  // 重写了返回的参数(Admin)
        return username -> {
            Admin admin = adminService.getAdminByUserName(username);
            if (admin != null) {
                // 设置一下权限
                admin.setRoles(adminService.getRoles(admin.getId()));
                return admin;
            }
            throw new UsernameNotFoundException("用户名或密码不正确");
        };
    }

    @Bean
    public PasswordEncoder passwordEncoder() {
        return new BCryptPasswordEncoder();
    }

    @Bean
    public JwtAuthencationTokenFilter jwtAuthencationTokenFilter() {
        return new JwtAuthencationTokenFilter();
    }

    @Bean
    public RestAuthorizationEnrtyPoint restAuthorizationEnrtyPoint() {
        return new RestAuthorizationEnrtyPoint();
    }

    @Bean
    public RestfulAccessDeniedHandel restfulAccessDeniedHandel() {
        return new RestfulAccessDeniedHandel();
    }
}
