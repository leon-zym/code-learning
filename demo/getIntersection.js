const solution = (arr1, arr2) => {
  if(!(arr1 instanceof Array) || !(arr2 instanceof Array)) return false
  
  let intersection = []
  arr1.forEach(item => {
      if(arr2.includes(item) && !intersection.includes(item)) {
          intersection.push(item)
      }
  })
  return intersection
}

let res = solution([1, 2, 3, 4, 5], [2, 3, 3, 5])
console.log(res);