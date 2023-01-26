const fs = require('fs')

fs.writeFile('./assets/demo.txt', 'Hello Node.js!', function (err, result) {
  if (err) {
    return console.log('文件写入失败！', err.message)
  }
  console.log('文件写入成功！')
})

fs.readFile('./assets/demo.txt', function(err, result) {
  if(err) {
    return console.log('文件读取失败！' + err.message)
  }
  console.log('文件读取成功！' + result)
})