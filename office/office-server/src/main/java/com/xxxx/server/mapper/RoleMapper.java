package com.xxxx.server.mapper;

import com.xxxx.server.pojo.Role;
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
public interface RoleMapper extends BaseMapper<Role> {

    /**
     * 根据用户id查询角色列表
     * @return
     */
    List<Role> getRoles(Integer adminId);
}
