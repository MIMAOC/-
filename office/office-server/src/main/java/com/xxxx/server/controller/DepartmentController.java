package com.xxxx.server.controller;


import com.xxxx.server.pojo.Department;
import com.xxxx.server.pojo.RespBean;
import com.xxxx.server.service.IDepartmentService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

/**
 * <p>
 *  前端控制器
 * </p>
 *
 * @author seven
 * @since 2023-05-04
 */
@RestController
@RequestMapping("/system/basic/department")
@Api(tags = {"部门管理"})
public class DepartmentController {


    @Autowired
    private IDepartmentService departmentService;

    /**
     * 获取所有部门
     *
     * @return
     */
    @ApiOperation("获取所有部门")
    @GetMapping("/")
    public List<Department> getAllDepartments() {
        return departmentService.getAllDepartments();
    }

    @ApiOperation("添加部门")
    @PostMapping("/")
    public RespBean addDep(@RequestBody Department dep) {
        return departmentService.addDep(dep);
    }

    @ApiOperation("删除部门")
    @DeleteMapping("/{id}")
    public RespBean deleteDep(@PathVariable("id") Integer id) {
        return departmentService.deleteDep(id);
    }

}