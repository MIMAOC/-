package com.xxxx.server.service;

import com.xxxx.server.pojo.Menu;
import com.baomidou.mybatisplus.extension.service.IService;

import java.util.List;

/**
 * <p>
 *  服务类
 * </p>
 *
 * @author seven
 * @since 2023-05-04
 */
public interface IMenuService extends IService<Menu> {

    /**
     * 根据角色获取菜单列表
     * @return
     */
    List<Menu> getMenusWithRole();

    /**
     * 查询所有菜单
     * @return
     */
    List<Menu> getAllMenus();

    List<Menu> getMenusByAdminId();

}
