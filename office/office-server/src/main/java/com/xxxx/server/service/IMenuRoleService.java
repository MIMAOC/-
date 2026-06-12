package com.xxxx.server.service;

import com.xxxx.server.pojo.MenuRole;
import com.baomidou.mybatisplus.extension.service.IService;
import com.xxxx.server.pojo.RespBean;

/**
 * <p>
 *  服务类
 * </p>
 *
 * @author seven
 * @since 2023-05-04
 */
public interface IMenuRoleService extends IService<MenuRole> {

    /**
     *  更新角色菜单
     *
     * @author seven
     * @since 2023-05-04
     */
    RespBean updateMenuRole(Integer rid, Integer[] mids);

}
