const http = require('http')

// 创建 Web 服务器实例
const server = http.createServer()

// 绑定 request 事件，监听客户端的请求并响应
server.on('request', function(req, res) {
    console.log('url:', req.url, ', method:', req.method)
    // do something...
    res.setHeader('Content-Type', 'text/html; charset=utf8')
    res.end('Hello Node.js, 这是一段中文字符。')
})

// 监听端口，启动服务器
server.listen(80, function() {
    console.log('Server running at http://127.0.0.1:80') // 80端口可省略
})