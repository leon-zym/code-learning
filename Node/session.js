const express = require('express')
const session = require('express-session')

const app = express()

app.use(session({
  secret: 'any string', // 随意的字符串即可
  resave: false, // 固定写法
  saveUninitialized: true // 固定写法
}))

// 用户登录接口
app.post('/api/login', (req, res) => {
  if(req.body.username != 'admin' || req.body.password != '123abc') {
    return res.send({status: 1, msg: 'login failed'})
  }
  // 登录成功，保存用户的信息到 Session 中
  req.session.user = req.body
  req.session.isLogin = true
})

// 获取用户名的接口
app.get('/api/getUser', (req, res) => {
  if(!req.session.isLogin) {
    return res.send({status: 1, msg: 'get failed'})
  }
  // 认证成功，将用户名返回
  res.send({status: 0, msg: 'get ok', username: req.session.user.username})
})

// 退出登录的接口
app.get('/api/logout', (req, res) => {
  // 清空 Session
  req.session.destroy()
  // 退出成功，返回信息
  res.send({status: 0, msg: 'logout ok'})
})