/*
let foo: any
let bar: unknown

foo = 56
bar = 43

let test: string
test = foo
// test = bar
*/

let foo: unknown
let bar: string

foo = 'hello'
// bar = foo // 报错

if(typeof foo === 'string') {
    bar = foo
}

bar = foo as string
bar = <string>foo