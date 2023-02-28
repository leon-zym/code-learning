const Stack = require('./modules/stack')

const decToBin = (decimalNumber) => {
  var stackData = new Stack()
  while(decimalNumber > 0) {
    stackData.push(decimalNumber % 2) // 正序入栈
    decimalNumber = Math.floor(decimalNumber / 2)
  }

  var binaryNumber = ''
  while(!stackData.isEmpty()) {
    binaryNumber += stackData.pop() // 倒序出栈
  }

  return binaryNumber
}

console.log('Decimal number is 100, binary number is ', decToBin(100))