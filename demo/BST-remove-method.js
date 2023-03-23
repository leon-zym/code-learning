class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }

  insert(value) {
    const newNode = new Node(value);

    if (!this.root) {
      this.root = newNode;
      return this;
    }

    let current = this.root;

    while (true) {
      if (value === current.value) return undefined;

      if (value < current.value) {
        if (!current.left) {
          current.left = newNode;
          return this;
        }

        current = current.left;
      } else {
        if (!current.right) {
          current.right = newNode;
          return this;
        }

        current = current.right;
      }
    }
  }

  find(value) {
    if (!this.root) return false;

    let current = this.root;
    let found = false;

    while (current && !found) {
      if (value < current.value) {
        current = current.left;
      } else if (value > current.value) {
        current = current.right;
      } else {
        found = true;
      }
    }

    if (!found) return false;

    return current;
  }

  remove(value) {
    if (!this.root) return false;

    let current = this.root;
    let parent = null;
    let found = false;
    let replacementNode = null;

    while (current && !found) {
      if (value < current.value) {
        parent = current;
        current = current.left;
      } else if (value > current.value) {
        parent = current;
        current = current.right;
      } else {
        found = true;
      }
    }

    if (!found) return false;

    if (!current.left && !current.right) {
      if (current === this.root) {
        this.root = null;
      } else if (current === parent.left) {
        parent.left = null;
      } else {
        parent.right = null;
      }
    } else if (current.left && !current.right) {
      if (current === this.root) {
        this.root = current.left;
      } else if (current === parent.left) {
        parent.left = current.left;
      } else {
        parent.right = current.left;
      }
    } else if (!current.left && current.right) {
      if (current === this.root) {
        this.root = current.right;
      } else if (current === parent.left) {
        parent.left = current.right;
      } else {
        parent.right = current.right;
      }
    } else {
      replacementNode = current.right;
      while (replacementNode.left) {
        replacementNode = replacementNode.left;
      }

      this.remove(replacementNode.value);

      current.value = replacementNode.value;
    }

    return true;
  }
}

const bst = new BinarySearchTree();
bst.insert(10);
bst.insert(5);
bst.insert(15);
bst.insert(3);
bst.insert(7);
bst.insert(12);
bst.insert(20);
console.dir(bst, {depth: null})
bst.remove(5);
console.dir(bst, {depth: null})
