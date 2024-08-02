class Stack<T> {
  private items: T[] = [];

  pop(): T | undefined {
    return this.items.pop();
  }

  push(element: T): void {
    this.items.push(element);
  }

  peek(): T | undefined {
    return this.items[this.items.length - 1];
  }

  isEmpty(): boolean {
    return this.items.length === 0;
  }

  clear(): void {
    this.items = [];
  }

  print(): void {
    console.log(this.items.toString());
  }
}

const stack = new Stack<number>();

stack.push(5);
stack.push(90);
stack.push(67);

stack.print();

stack.pop();
stack.print();

console.log(stack.peek());

stack.pop();
stack.print();
