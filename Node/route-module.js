const express = require('express')

// 创建路由实例对象
const router = express.Router()

// 把路由规则挂载在路由实例对象身上
router.get('/', (req, res) => {
  res.send({ url: req.url, method: req.method })
})

router.post('/postData', (req, res) => {
  res.send({ url: req.url, method: req.method })
})

// 向外暴露出去
module.exports = router