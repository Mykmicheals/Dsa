// function search(n) {
//     var arr = [12, 16, 19, 11, 14, 10, 9];
//     var len = arr.length - 1
//     for (i = 0; i < len; i++) {
//         if (arr[i] === n) {
//             return i
//         }
//     }
//     return 0
// }

// function binarySearch(n) {
//     var arr = [2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14]
//     var left = 0;
//     var right = arr.length - 1

//     while (left <= right) {
//         var mid = Math.floor((right + left) / 2)
//         if (n === arr[mid]) {
//             return mid
//         } else if (n > arr[mid]) {
//             left = mid + 1;
//         }
//         else {
//             right = mid - 1
//         }

//     }
 
// }

function binarySearch(n) {
    var arr = [2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14];
    var left = 0;
    var right = arr.length - 1;

    while (left <= right) {
        var mid = Math.floor((right + left) / 2);
        if (n === arr[mid]) {
            return mid;
        } else if (n > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // element is not found
}


console.log(binarySearch(14))

