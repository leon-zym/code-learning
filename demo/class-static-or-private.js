class Foo {
  constructor() {
    this._privateProp = 'private property';
  }

  get privateProp() {
    return this._privateProp;
  }

  set privateProp(value) {
    this._privateProp = value;
  }

  static privateBar = 12
}

const foo = new Foo();
console.log(foo.privateProp); // 输出 "private property"
foo.privateProp = 'new value';
console.log(foo.privateProp); // 输出 "new value"

console.log(foo.privateBar); // 输出 "undefined"
console.log(Foo.privateBar); // 输出 "12"