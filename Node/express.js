const express = require('express')

// 创建 Web 服务实例
const app = express()

// app.use(express.static('./static')) // 将 static 目录中的文件挂载出去，路径中不含目录名
// app.use('static', express.static('./static')) // 将 static 目录中的文件挂载出去，路径需以 static 开头

// 启动服务，监听 8081 端口
app.listen(8081, () => {
  console.log('server on http://127.0.0.1:8081')
})

// 处理 GET 请求
app.get('/', (req, res) => {
  const query = req.query
  res.send(query) // 将 URL 中携带的 query 参数返回
})

// 处理 POST 请求
app.post('/postData', (req, res) => {
  res.send({ name: 'Leon', age: 18 }) // 响应一个 JOSN 对象
})