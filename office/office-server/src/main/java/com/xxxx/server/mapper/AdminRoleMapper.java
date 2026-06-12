package com.xxxx.server.mapper;

import com.xxxx.server.pojo.AdminRole;
import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.xxxx.server.pojo.RespBean;
import io.swagger.models.auth.In;
import org.apache.ibatis.annotations.Param;

/**
 * <p>
 *  Mapper 接口
 * </p>
 *
 * @author seven
 * @since 2023-05-04
 */
public interface AdminRoleMapper extends BaseMapper<AdminRole> {

    /**
     * 更新操作员角色
     * @return
     */
    Integer addAdminRole(@Param("adminId") Integer adminId, @Param("rids")Integer[] rids);
}
