function reverse(arr) {
    var reversed = [];
    for (var i = arr.length - 1; i >= 0; i--) {
        reversed.push(arr[i]);
    }
    return reversed;
}

console.log(reverse([1, 2, 3, 4, 5]));  // [5, 4, 3, 2, 1]