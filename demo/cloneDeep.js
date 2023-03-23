const cloneDeepNotDone = (obj) => {
  if(!obj instanceof Object) return false
  // 判断是否为 Date、RegExp类型，单独处理
  let newObj = {}
  let arr = Object.key(obj)
  for(let i = 0; i <=arr.length; i++ ) {
    if(obj.hasOwnProperty(arr[i])) {
      if(obj[arr[i]] instanceof Object) {
        cloneDeepNotDone(obj[arr[i]])
      } else {
        newObj.arr[i] = obj[arr[i]]
      }
    }
  }
}

// 递归实现
function cloneDeep(obj) {
  const newObj = {};
  let keys = Object.keys(obj);
  let key = null;
  let data = null;
  for (let i = 0; i < keys.length; i++) {
    key = keys[i];
    data = obj[key];
    if (data && typeof data === "object") {
      newObj[key] = cloneDeep(data);
    } else {
      newObj[key] = data;
    }
  }
  return newObj;
}

// 解决了循环引用的递归实现
function cloneDeepBetter(obj, parent = null) {
  // 创建一个新对象
  let result = {};
  let keys = Object.keys(obj),
    key = null,
    temp = null,
    _parent = parent;
  // 该字段有父级则需要追溯该字段的父级
  while (_parent) {
    // 如果该字段引用了它的父级则为循环引用
    if (_parent.originalParent === obj) {
      // 循环引用直接返回同级的新对象
      return _parent.currentParent;
    }
    _parent = _parent.parent;
  }
  for (let i = 0; i < keys.length; i++) {
    key = keys[i];
    temp = obj[key];
    // 如果字段的值也是一个对象
    if (temp && typeof temp === "object") {
      // 递归执行深拷贝 将同级的待拷贝对象与新对象传递给 parent 方便追溯循环引用
      result[key] = cloneDeepBetter(temp, {
        originalParent: obj,
        currentParent: result,
        parent: parent,
      });
    } else {
      result[key] = temp;
    }
  }
  return result;
}