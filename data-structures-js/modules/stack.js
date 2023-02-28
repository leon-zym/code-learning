const Stack = function() {
  this.stackData = []

  Stack.prototype.push = function(item) {
    this.stackData.push(item)
  }
  Stack.prototype.pop = function() {
    return this.stackData.pop()
  }
  Stack.prototype.peek = function() {
    return this.stackData[this.stackData.length - 1]
  }
  Stack.prototype.isEmpty = function() {
    return this.stackData.length === 0
  }
  Stack.prototype.size = function() {
    return this.stackData.length
  }
  Stack.prototype.toString = function() {
    var stackString = ''
    this.stackData.forEach(item => {
      stackString = stackString + item + ' '
    })
    return stackString
  }
}

module.exports = Stack