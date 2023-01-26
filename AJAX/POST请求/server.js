// 1. 引入express
const { response } = require("express");
const { request } = require("express");
const express = require("express");

// 2. 创建应用对象
const app = express();

// 3. 创建路由规则
// request是对请求报文的封装，response是对响应报文的封装
app.post("/server", (request, response) => {
    // 设置响应头
    response.setHeader("Access-Control-Allow-Origin", "*");
    // 设置响应体
    response.send("HELLO AJAX POST");
});

// 4. 监听端口启动服务
app.listen("8000", () => {
    console.log("请求已响应，8000端口监听中");
});
