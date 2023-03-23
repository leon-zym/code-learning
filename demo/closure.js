// 使用 var 定义全局变量，每隔一秒输出 5
/* for (var i = 0; i < 5; i++) {
  setTimeout(() => {
    console.log(i);
  }, i * 1000);
} */

// 使用 let 定义局部变量，每隔一秒输出 0 1 2 3 4
/* for (let i = 0; i < 5; i++) {
  setTimeout(() => {
    console.log(i);
  }, i * 1000);
} */

// 使用立即执行函数包裹，形成闭包，每隔一秒输出 0 1 2 3 4
/* for (var i = 0; i < 5; i++) {
  (function (i) { // 
    setTimeout(() => {
      console.log(i);
    }, i * 1000);
  })(i)
} */

// setTimeout 的回调函数改为立即执行，并返回一个空函数，立刻输出 0 1 2 3 4
for (let i = 0; i < 5; i++) {
  setTimeout(
    (() => {
      console.log(i);
      return () => {};
    })(),
    i * 1000
  );
}