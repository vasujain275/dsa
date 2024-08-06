class ANode<T> {
  private value: T;
  private next: ANode<T> | null = null;

  constructor(value: T) {
    this.value = value;
  }
  getValue(): T {
    return this.value;
  }

  getNext(): ANode<T> | null {
    return this.next;
  }

  setNext(node: ANode<T> | null): void {
    this.next = node;
  }
}

class LinkedList<T> {
  private head: ANode<T> | null = null;
  private length: number = 0;

  append(value: T): void {
    const newNode = new ANode(value);
    if (!this.head) {
      this.head = newNode;
    } else {
      let current = this.head;
      while (current.getNext()) {
        current = current.getNext()!;
      }
      current.setNext(newNode);
    }
    this.length++;
  }

  prepend(value: T): void {
    const newNode = new ANode(value);
    newNode.setNext(this.head);
    this.head = newNode;
    this.length++;
  }
}

const list = new LinkedList<number>();
list.append(1);
list.append(2);
list.append(3);
list.prepend(0);
