package com.xxxx.server.service;

import com.xxxx.server.pojo.Admin;
import com.xxxx.server.pojo.RespBean;
import com.baomidou.mybatisplus.extension.service.IService;
import com.xxxx.server.pojo.Role;
import io.swagger.models.auth.In;

import javax.servlet.http.HttpServletRequest;
import java.util.List;

/**
 * <p>
 *  服务类
 * </p>
 *
 * @author seven
 * @since 2023-05-03
 */
public interface IAdminService extends IService<Admin> {

    /**
     * 登录后返回token
     *
     * @return
     */
    RespBean login(String username, String password, String code, HttpServletRequest request);

    /**
     * 根据用户名获取用户
     * @return
     */
    Admin getAdminByUserName(String username);

    /**
     * 根据用户id查询角色列表
     * @return
     */
    List<Role> getRoles(Integer adminId);

    /**
     * 获取所有操作员
     * @param keywords
     * @return
     */
    List<Admin> getAllAdmins(String keywords);

    /**
     * 更新操作员角色
     * @return
     */
    RespBean updateAdminRole(Integer adminId, Integer[] rids);

    /**
     * 更新用户密码
     * @param oldPass
     * @param pass
     * @param adminId
     * @return
     */
    RespBean updateAdminPassword(String oldPass, String pass, Integer adminId);
}
