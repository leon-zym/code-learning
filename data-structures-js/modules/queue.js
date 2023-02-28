const Queue = function() {
  this.queueData = []

  Queue.prototype.add = function(item) {
    this.queueData.push(item)
  }
  Queue.prototype.del = function() {
    return this.queueData.shift()
  }
  Queue.prototype.front = function() {
    return this.queueData[0]
  }
  Queue.prototype.isEmpty = function() {
    return this.queueData.length === 0
  }
  Queue.prototype.size = function() {
    return this.queueData.length
  }
  Queue.prototype.toString = function() {
    var queueString = ''
    this.queueData.forEach(item => {
      queueString += item + ' '
    })
    return queueString
  }
}

module.exports = Queue