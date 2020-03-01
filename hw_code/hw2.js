
// let arrB = [30, 10, 20, 40];
// let arrA = [7, 6, 12, 9, 3, 4, 5, 11, 9, 14, 2, 8];

let count = 0;

let arrB = [30, 10, 20, 40];
let arrA = [7, 6, 12, 9, 3, 4, 5, 11, 9, 14, 2, 8];

// function printArr(arr) {
//   const end = arr.length-1
//   arr.forEach((e, i) => {
//     i === end ? process.stdout.write(`${e}\n`) : process.stdout.write(`${e}, `);
//   });
// }

// function insertionSort (arr){

//   let count = i = j = key = 0;

//   for (i = 0; i < arr.length; i++) {

//     key = arr[i];

//     for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//       ++count;
//       arr[j + 1] = arr[j];
//     }
//     arr[j + 1] = key;
//     printArr(arr);
//   }
//   console.log(`Total Insertions: ${count}`);
//   // return arr;
// };


// insertionSort(arrB);

function insertionSort (arr){
  
  for (let i = 0; i < arr.length; i++) {
    //++count
    let key = arr[i];
    let j;

    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
     // ++count
     if(arr[j] > key){
      ++count;
     }
        arr[j + 1] = arr[j];
     
    }
    arr[j + 1] = key;
    console.log(arr);
  }
  console.log(count)
  return arr;
};


console.log(insertionSort(arrB));
