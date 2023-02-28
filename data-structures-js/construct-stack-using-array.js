const Stack = require('./modules/stack')

var s = new Stack()

s.push(12)
s.push(24)
s.push(36)
s.push(48)

console.log('After push, the stack now is ', s.toString())

console.log(' Now pop ', s.pop())
console.log(' Now pop ', s.pop())
console.log(' Now pop ', s.pop())
// console.log(' Now pop ', s.pop())

console.log('Now peek of the stack is ', s.peek())

console.log('Is the stack empty now? ', s.isEmpty())

console.log('The size of the stack is ', s.size())