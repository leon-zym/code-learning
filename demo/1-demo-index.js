const solution = (str) => {
  let arr = []
  arr = str.split("")
  let onlyStrIndex = -1
  
  arr.forEach((item, index, array) => {
      let beforeArr = array.slice(0, index)
      let afterArr = array.slice(index + 1, array.length)
      if(!beforeArr.includes(item) && !afterArr.includes(item)) {
          onlyStrIndex = index
      }
  })
  
  return onlyStrIndex
}

let res = solution("javajavascript")
console.log(res);