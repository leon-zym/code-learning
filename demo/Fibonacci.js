function fn(index) {
  if(index <= 0) {
    return -1
  } else if (index === 1 || index === 2) {
    return 1
  }

  let i = 1
  let j = 1
  for (let k = 3; k <= index; k++) {
    let temp
    temp = j
    j = i + j
    i = temp
  }
  return j
}

console.log(fn(-1))
console.log(fn(1))
console.log(fn(2))
console.log(fn(3))
console.log(fn(5))
console.log(fn(6))