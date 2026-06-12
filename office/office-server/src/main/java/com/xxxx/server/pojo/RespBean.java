package com.xxxx.server.pojo;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

/**
 * 公共返回对象
 */
@Data
@NoArgsConstructor
@AllArgsConstructor
public class RespBean {
    //状态码
    private long code;
    //提示信息
    private String message;
    //返回的对象
    private Object obj;

    //定义成功返回结果
    public static RespBean success(String message, Object obj) {
        //成功返回默认值：200
        return new RespBean(200, message, obj);
    }

    public static RespBean success(String message) {
        //成功返回默认值：200
        return new RespBean(200, message, null);
    }

    //失败返回
    public static RespBean error(String message, Object obj) {
        //失败默认值：500
        return new RespBean(500, message, obj);
    }

    public static RespBean error(String message) {
        return new RespBean(500, message, null);
    }
}
