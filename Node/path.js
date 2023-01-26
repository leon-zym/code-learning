const fs = require('fs')
const path = require('path')

let filePath = path.join(__dirname, '/assets/demo.txt')

fs.readFile(filePath, function(err, result) {
  if(err) {
    return console.log('文件读取失败！' + err.message)
  }
  console.log('文件读取成功！' + result)
})