package com.xxxx.server.config.security;

import io.jsonwebtoken.Claims;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.stereotype.Component;

import java.util.Date;
import java.util.HashMap;
import java.util.Map;

/**
 * JwtToken工具类
 */
@Component
public class JwtTokenUtil {
    private static final String CLAIM_KEY_USERNAME = "sub";
    private static final String CLAIM_KEY_CREATED = "created";

    @Value("${jwt.secret}")
    private String secret;
    @Value("${jwt.expiration}")
    private Long expiration;


    /**
     * 根据用户信息生成Token
     *
     * @param userDetails
     * @return
     */
    public String generateToken(UserDetails userDetails) {
        Map<String, Object> claims = new HashMap<>();
        claims.put(CLAIM_KEY_USERNAME, userDetails.getUsername());
        claims.put(CLAIM_KEY_CREATED, new Date());
        return generateToken(claims);
    }

    /**
     * 从token中获取登录的用户名
     *
     * @param token
     * @return
     */
    public String getUserNameFromToken(String token) {
        String username;
        try {
            Claims claims = getUserClaimFromToken(token);
            username = claims.getSubject();
        } catch (Exception e) {
            e.printStackTrace();
            username = null;
        }
        return username;
    }

    /**
     * 验证token是否有效  (token有效 + 用户一致)
     *
     * @param token
     * @param userDetails
     * @return
     */
    public boolean validateToken(String token, UserDetails userDetails) {
        // 终归是来源于token的
        String username = getUserNameFromToken(token);

        // 然后在token有效的前提下对比用户名是否一致
        return username.equals(userDetails.getUsername()) && !isTokenExpired(token);
    }

    /**
     * 判断token是否可以被刷新
     *
     * @param token
     * @return
     */
    public boolean canRefresh(String token) {
        return !isTokenExpired(token);
    }

    /**
     * 刷新token
     *
     * @param token
     * @return
     */
    public String refreshToken(String token) {
        Claims claims = getUserClaimFromToken(token);
        claims.put(CLAIM_KEY_CREATED, new Date());
        return generateToken(claims);
    }

    /**
     * 判断token是否存在以及失效
     *
     * @param token
     * @return
     */
    public boolean isTokenExpired(String token) {
        // 拿到载荷里设置的有效时间
        Date expireDate = getExpiredDateFromToken(token);

        // 验证载荷里的时间是否以及失效(失效返回true)
        return expireDate.before(new Date());
    }

    /**
     * 获取token过期时间
     *
     * @param token
     * @return
     */
    private Date getExpiredDateFromToken(String token) {
        Claims claims = getUserClaimFromToken(token);
        return claims.getExpiration();
    }

    /**
     * 从token中获取荷载
     *
     * @param token
     * @return
     */
    private Claims getUserClaimFromToken(String token) {
        Claims claims = null;
        try {
            claims = Jwts.parser()
                    .setSigningKey(secret)
                    .parseClaimsJws(token)
                    .getBody();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return claims;
    }

    /**
     * 根据荷载生成JWT Token
     *
     * @param claims
     * @return
     */
    private String generateToken(Map<String, Object> claims) {
        System.out.println("secret:" + secret);
        return Jwts.builder()
                .setClaims(claims)                           // 设置载荷
                .setExpiration(generateExpirationDate())     // 设置失效时间
                .signWith(SignatureAlgorithm.HS512, secret)  // 设置签名
                .compact();
    }

    /**
     * 生成token失效时间
     *
     * @return
     */
    private Date generateExpirationDate() {
        // 失效时间是就当前系统时间加 有效时间
        return new Date(System.currentTimeMillis() + expiration * 1000);
    }

}