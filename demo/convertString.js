function convertString(s) {
  var arr = s.split("");
  var newArr = arr.map((item) => {
    return item === item.toUpperCase()
      ? item.toLowerCase()
      : item.toUpperCase();
  });
  return newArr.join("");
}
console.log(convertString("AbC")); // 输出 "aBc"