const express = require('express')
const jwt = require('jsonwebtoken')
const expressJWT = require('express-jwt')

const app = express()

// 定义一个加密密钥
const secretKey = 'some complex string'

// 注册中间件，用于解密 Authorization 请起头中的 token，认证成功后会将解密出的 JSON 对象放在 req.user 里。认证失败会报错，需要做错误捕获
// unless 方法可以指定哪些接口不需要访问权限
app.use(expressJWT({secret: secretKey}).unless({path: [/^\/api\//]}))

// 用户登录接口
app.post('/api/login', (req, res) => {
  if(req.body.username != 'admin' || req.body.password != '123abc') {
    return res.send({status: 1, msg: 'login failed'})
  }
  // 登录成功，生成 token 字符串并返回
  // 用于加密的 sign 方法接收三个参数：用户信息对象，加密密钥，配置信息对象。返回 token 字符串
  const tokenStr = jwt.sign({username: req.body.username}, secretKey, {expiresIn: '30s'})
  res.send({status: 0, msg: 'login ok', token: tokenStr})
})

// 获取用户名的接口
app.get('/api/getUser', (req, res) => {
  // 中间件已经认证通过，直接返回用户名即可
  // 利用 req.user 就可以拿到加密时传入的用户信息对象
  res.send({status: 0, msg: 'get ok', username: req.user})
})

// 用于捕获错误的全局中间件
app.use((err, req, res, next) => {
    // token 认证失败导致的错误
    if(err.name === 'UnauthorizedError') {
        return res.send({status: 401, msg: 'invalid token'})
    } else {
        // 其他原因导致的错误
        res.send({status: 500, msg: 'unknow error'})
    }
})