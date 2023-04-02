const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
})


/* // 以问答的形式接收输入，若需要输入多行，需要在回调中嵌套
readline.question("What's your name?\n\n", name => {
  console.log(`\nHello ${name}`);
  readline.close() // 结束输入
}) */


/* // 接受单行输入，数据以空格形式分隔
readline.on("line", function (line) {
  const tokens = line.split(" ");
  console.log(parseInt(tokens[0]) + parseInt(tokens[1])); // 输入的均为字符串，需要转换为数字
}); */


// 接收多行输入，可以在适时调佣 close 方法关闭输入。使用一个数组依次接收每一行输入的字符串
const arr = [] 
readline.on("line", function(line) {
  arr.push(line)
  if (arr.length === 2) {
    readline.close()
  }
})
// 监听 close 事件，对存储输入的数组进行处理
readline.on("close", function () {
  for (let i = 0; i < arr.length; i++) {
    const item = arr[i];
    console.log(item);
  }
})


