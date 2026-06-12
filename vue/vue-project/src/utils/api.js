import axios from "axios";
import {Message} from "element-ui";
import router from "@/router";

//请求拦截器
axios.interceptors.request.use(config =>{
    //如果存在token，请求携带这个token
if(window.sessionStorage.getItem('tokenStr')){
    config.headers['Authorization'] = window.sessionStorage.getItem('tokenStr');
}
return config;
},error => {
console.log(error);
})

//封装后，调用接口

//响应的拦截器   //success：成功调动后端接口
axios.interceptors.response.use(success => {
    // status是否存在且是否等于200（http协议默认）
    if (success.status && success.status == 200) {
        //业务逻辑，code：响应码//500：业务逻辑错误/ 401：未登录/ 403：权限禁止
        if (success.data.code == 500 || success.data.code == 401 || success.data.code == 403) {
            //后端相应信息提示
            Message.error({message: success.data.message});
            //业务逻辑错误，返回空
            return;
        }
        //如果除了上述三个响应码以外的情况（视为成功），提示响应信息
        if (success.data.message) {
            Message.success({message: success.data.message});
        }
    }
    //返回拦截器的对象，处理后续
    return success.data;
}, error => {   //接口访问失败/请求错误/没有访问到后端
    //后端无法提供信息，由前端提示
    if (error.response.code == 504 || error.response.code == 404) {
        Message.error({message: '服务器被吃了( ╯□╰ )'});
    } else if (error.response.code == 403) {
        Message.error({message: '权限不足，请联系管理员！'});
    } else if (error.response.code == 401) {
        Message.error({message: '尚未登录，请登录'});
        //去找登录界面
        router.replace('/');
    }else{  //如果都没有
        //判断响应是否有信息
        if(error.response.data.message){
            Message.error({message:error.response.data.message});
        }else{
            Message.error({message:'未知错误!'});
        }
    }
    //有错，返回空
    return;
});

//前置地址
let base = '';

//传送json格式的post请求
export const postRequest = (url,params) =>{
    return axios({
        method:'post',
        url:`${base}${url}`,//如果要加前置地址，直接修改base
        data:params //数据
    })
}

//传送JSON的put请求
export const putRequest = (url,params) =>{
    return axios({
        method:'put',
        url:`${base}${url}`,
        data:params
    })
}

//传送JSON的get请求
export const getRequest = (url,params) =>{
    return axios({
        method:'get',
        url:`${base}${url}`,
        data:params
    })
}

//传送JSON的delete请求
export const deleteRequest = (url,params) =>{
    return axios({
        method:'delete',
        url:`${base}${url}`,
        data:params
    })
}