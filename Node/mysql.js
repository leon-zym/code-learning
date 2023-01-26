const mysql = require('mysql')

// 建立与 MySQL 数据库的连接
const db = mysql.createPool({
    host: '127.0.0.1',
    user: 'root',
    password: 'root',
    database: 'test_schema'
})

// 检测 MySQL 模块是否正常运行
db.query('SELECT 1', (err, res) => {
    if(err) return console.log(err.message)
    console.log(res) // [ RowDataPacket { '1': 1 } ]
})

// 准备数据
const userInfo = { username: 'Leon', password: '123abc' }

// 准备 SQL 语句，? 表示占位符
const sqlStr = 'INSERT INTO users (username, password) VALUES (?, ?)'

// 使用数组的形式依次替换占位符
db.query(sqlStr, [userInfo.username, userInfo.password], (err, res) => {
    if(err) return console.log(err.message)
    if(res.affectedRows === 1) {
        console.log('insert successfully')
        // do something...
    }
})

const newUserInfo = { username: 'Jack', password: '0000aaa' }

const upSqlStr = 'UPDATE users SET username=?, password=? WHERE id=6'

db.query(upSqlStr, [newUserInfo.username, newUserInfo.password], (err, res) => {
    if(err) return console.log(err.message)
    if(res.affectedRows === 1) { // 返回一个对象，可以判断是否修改成功
        console.log('update successfully')
        // do something...
    }
})

const delSqlStr = 'DELETE FROM users WHERE id=?'

db.query(delSqlStr, 6, (err, res) => {
    if(err) return console.log(err.message)
    if(res.affectedRows === 1) { // 返回一个对象，可以判断是否删除成功
        console.log(' delete successfully')
        // do something...
    }
})