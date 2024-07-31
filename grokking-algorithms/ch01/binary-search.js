// Array to perform binary search in
let arr = [1, 3, 5, 6, 8, 11, 34, 56, 78, 99];

// Key to search in the Array
let item = 78;

// Binary Search Logic

let low = 0;
let high = arr.length - 1;

while (low <= high) {
  let mid = Math.floor((low + high) / 2);

  if (arr[mid] === item) {
    console.log(`The item is at index ${mid}`);
    break;
  }

  if (low === high) {
    result = arr[low] === item ? `Item is at ${low} index` : "Item not found";
    console.log(result);
    break;
  }

  if (arr[mid] > item) {
    high = mid;
  }

  if (arr[mid] < item) {
    low = mid;
  }
}
