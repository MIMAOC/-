package com.xxxx.server.mapper;

import com.xxxx.server.pojo.Menu;
import com.baomidou.mybatisplus.core.mapper.BaseMapper;

import java.util.List;

/**
 * <p>
 *  Mapper 接口
 * </p>
 *
 * @author seven
 * @since 2023-05-04
 */
public interface MenuMapper extends BaseMapper<Menu> {

    /**
     * 根据用户ID查询菜单列表
     * @return
     */
    List<Menu> getMenusByAdminId(Integer id);


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
}
