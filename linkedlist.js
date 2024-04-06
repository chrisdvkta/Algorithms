function Node(val = null, next = null) {
  return {
    value: val,
    next: next,
  };
}

function LinkedList() {
  return {
    head: null,

    append(v) {
      let newNode = Node(v);

      if ((this.head = null)) {
        this.head = newNode;
      } else {
        let tail = this.head;
        while (tail.next !== null) {
          tail = tail.next;
        }
        tail.next = newNode;
      }
    },

    prepend(v) {
      let newNode = Node(v, this.head);
      this.head = newNode;
    },

    size() {
      let count = 0;
      let current = this.head;
      while (current !== null) {
        count += 1;
        current = current.next;
      }
      console.log("size(): ", count);
      return count;
    },

    findHead() {
      return this.head.value;
    },

    tail() {
      let tail = this.head;
      while (tail.next) {
        tail = tail.next;
      }
      return tail.next;
    },

    at(index) {
      let i = 0;
      let current = this.head;
      while (i < index) {
        i++;
        if (current.next) {
          current = current.next;
        } else {
          return "ERROR OUT OF RANGE";
        }
        return current;
      }
    },

    pop() {
      let current = this.head;
      while (current.next.next) {
        current = current.next;
      }
      current.next = null;
      return current;
    },
    //check if value is in list or not ;
    contains(v) {
      let current = this.head;
      while (current) {
        if (current.value === v) {
          return true;
        }
        current = current.next;
      }
      return false;
    },

    find(v) {
      //returns index of node
      let current = this.head;
      let i = 0;
      while (current) {
        if (current.value === v) {
          return i;
        }
        i++;
        current = current.next;
      }
      return null;
    },

    insertAt(v, index) {
      let current = this.head;
      let i = 0;
      while (current) {
        if (i === index - 1) {
          const newNode = Node(v, current.next);
          current.next = newNode;
        }
        current = current.next;
        i++;
      }
    },

    removeAt(index) {
      let current = this.head;
      let i = 0;
      while (current) {
        if (i === index - 1) {
          current.next = current.next.next;
        }
        i++;
        current = current.next;
      }
    },
  };
}

const List = LinkedList();
List.append(2);
