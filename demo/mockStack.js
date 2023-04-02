const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let N = 0;
const array = [];

rl.on("line", (line) => {
  if (N === 0) {
    N = parseInt(line);
  } else {
    const operationArr = line.split(" ");
    array.push(operationArr);
  }
  array.length === N && rl.close();
});

rl.on("close", () => {
  stackHandle(array);
});

class Stack {
  constructor() {
    this.data = [];
  }
  push(element) {
    this.data.push(element);
  }
  pop() {
    if (this.data.length) {
      return this.data.pop();
    } else {
      return "error";
    }
  }
  top() {
    if (this.data.length) {
      let topIndex = this.data.length - 1;
      return this.data[topIndex];
    } else {
      return "error";
    }
  }
}

const stackHandle = (array) => {
  const stack = new Stack();
  array.forEach((item) => {
    switch (item[0]) {
      case "push":
        let pushElement = parseInt(item[1]);
        stack.push(pushElement);
        break;
      case "pop":
        let popElement = stack.pop();
        console.log(popElement);
        break;
      case "top":
        let topElement = stack.top();
        console.log(topElement);
        break;
      default:
        console.error("Invalid method");
    }
  });
};
