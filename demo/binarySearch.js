function binarySearch(arr, target) {
  if (!arr.length) return -1
  
  let leftIndex = 0
  let rightIndex = arr.length - 1

  while (leftIndex <= rightIndex) {
    let middleIndex = Math.floor((leftIndex + rightIndex) / 2)

    if (arr[middleIndex] < target) {
      leftIndex = middleIndex + 1
    } else if (arr[middleIndex] > target) {
      rightIndex = middleIndex - 1
    } else {
      return middleIndex
    }
  }
  return -1
}

const testCase1 = [1, 2, 3, 6, 9, 23, 34, 56, 78, 90, 97]
console.log(binarySearch(testCase1, 3))
console.log(binarySearch(testCase1, 9))
console.log(binarySearch(testCase1, 56))
console.log(binarySearch(testCase1, 97))
console.log(binarySearch(testCase1, 5))

console.log('---------------');

const testCase2 = [99]
const testCase3 = []
console.log(binarySearch(testCase2, 99))
console.log(binarySearch(testCase3, 99))