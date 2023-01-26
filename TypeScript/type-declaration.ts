let a: number
a = 12
// a = 'hello'

let b: boolean = true
// b = 12

function sum(c: number, d: number) {
  return c + d
}

sum(43, 65)
// sum(54, 'jet')
// sum(43, 34, 54)
// sum(32)

function fn(name: string, age: number): boolean {
  // return 'foo' // 报错
  return false
}

let result = fn('Leon', 18)