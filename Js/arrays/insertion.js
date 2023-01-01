var array = [12, 16, 19, 11, 14, 10, 9]


// insert 9 in postion 3

function insert() {
    var arr = [12, 16, 19, 11, 14, 10, 9]
    var len = array.length - 1
    for (i = len; i > 3; i--) {
        arr[i + 1] = arr[i]
        arr[3] = 9
    }
    return arr
}

// O(n)


console.log(insert())