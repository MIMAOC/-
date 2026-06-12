const { defineConfig } = require('@vue/cli-service')

let proxyObj = {}

proxyObj['/'] ={
  //wensocket
  ws:false,
  //目标地址(代理到后端接口)
  target:'http://localhost:7766',
  //发送球球的host会被设置target
  changeOrigin:true,
  //不重写请求地址
  pathWrite:{
    '^/':'/'
  }
}

module.exports = defineConfig({
  transpileDependencies: true,
  lintOnSave:false,
  devServer:{
    host:'localhost',
    port:7000,
    proxy:proxyObj
  }
})
