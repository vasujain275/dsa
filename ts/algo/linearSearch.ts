const arr: number[] = [1, 3, 5, 6, 8, 11, 34, 56, 78, 99];

function search<T>(haystack: T[], key: T): number {
  for (let i = 0; i < haystack.length; i++) {
    if (haystack[i] === key) {
      return i;
    }
  }
  return -1;
}

console.log(search(arr, 8));
