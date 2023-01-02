
function deletion(n) {
    var arr = [12, 16, 19, 11, 14, 10, 9];
    var len = arr.length - 1;

    for (i = 0; i <= len; i++) {
        if (arr[i] === n) {
            arr[i] = arr[len];  // replace the element with the last element of the array
            arr.length--  //decrease the size of the array by one
            len--;  // update the value of len
        }
    }

    return arr;
}

console.log(deletion(14));  // [12, 16, 19, 11, 10, 9]
