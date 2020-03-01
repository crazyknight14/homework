
let arr1 = [9, 4, 2, 7, 3, 1, 20, 14, 2, 6, 3, 7];

let arr = [1, 2, 3, 4, 5];
//[2, 3, 1, 4, 5];
let k = 1;
// Merge Sort Implentation (Recursion)
function mergeSort (unsortedArray) {
  // No need to sort the array if the array only has one element or empty
  if (unsortedArray.length <= 1) {
    return unsortedArray;
  }
  // In order to divide the array in half, we need to figure out the middle
  const middle = Math.floor(unsortedArray.length / 2);

  // This is where we will be dividing the array ft and right
  const left = unsortedArray.slice(0, middle);
  const right = unsortedArray.slice(middle);

  // Using recursion to combine the left and right
  return merge(
    mergeSort(left), mergeSort(right)
  );
}

// Merge the two arrays: left and right
function merge (left, right) {
  let resultArray = [], leftIndex = 0, rightIndex = 0;

  // We will concatenate values into the resultArray in order
  while (leftIndex < left.length && rightIndex < right.length) {
    if (left[leftIndex] < right[rightIndex]) {
      resultArray.push(left[leftIndex]);
      leftIndex++; // move left array cursor
    } else {
      resultArray.push(right[rightIndex]);
      rightIndex++; // move right array cursor
    }
  }

  // We need to concat here because there will be one element remaining
  // from either left OR the right
  return resultArray
          .concat(left.slice(leftIndex))
          .concat(right.slice(rightIndex));
}
let binarySearch = function (arr, x, start, end) { 
       
    // Base Condtion 
    if (start > end){ 
   
    // Find the middle index 
    let mid=Math.floor((start + end)/2); 
   
    // Compare mid with given key x 
    if (arr[mid]===x) return true; 
          
    // If element at mid is greater than x, 
    // search in the left half of mid 
    if(arr[mid] > x)  
        return binarySearch(arr, x, start, mid-1); 
    else
  
        // If element at mid is smaller than x, 
        // search in the right half of mid 
        return binarySearch(arr, x, mid+1, end); 
      }
      return false
} 

function countPairs(arr, k){
  let count = 0;
  mergeSort(arr);

  for (let i = 0; i < arr.length-1; i++){ 
        if (binarySearch(arr, arr[i] + k, i+1, arr.length-1) != -1){ 
            count++;
        } 
  }
    return count; 
}

console.log(countPairs(arr, k));
//console.log(mergeSort(arr));
//binarySearch(arr1, 0, arr.length-1, 4);
