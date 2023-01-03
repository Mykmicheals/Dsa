function isSorted(arr) {
  var len = arr.length - 1;
  for (var i = 0; i < len; i++) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}

console.log(isSorted([2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20]));  // true
