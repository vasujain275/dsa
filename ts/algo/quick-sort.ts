const arr: number[] = [1, 3, 5, 6, 8, 11, 34, 56, 78, 99];

function quickSort(arr: number[]) {
  if (arr.length < 2) {
    return arr;
  } else {
    const pivot = arr[0];
    const less: number[] = [];
    const greater: number[] = [];
    arr.forEach((item) => {
      if (item > pivot) {
        greater.push(item);
      } else {
        less.push(item);
      }
    });
    return quickSort(less) + [pivot] + quickSort(greater);
  }
}

const sorted = quickSort(arr);
console.log(sorted);
