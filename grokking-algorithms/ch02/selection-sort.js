let arr = [64, 34, 25, 12, 22, 11, 90];

function findSmallest(arr) {
  let smallest = arr[0];
  let smallestIndex = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
      smallestIndex = i;
    }
  }
  return smallestIndex;
}

function selectionSort(arr) {
  let newArr = [...arr];
  let sortedArr = [];
  while (newArr.length > 0) {
    let smallestIndex = findSmallest(newArr);
    sortedArr.push(newArr[smallestIndex]);
    newArr.splice(smallestIndex, 1);
  }
  return sortedArr;
}

console.log(selectionSort(arr));
