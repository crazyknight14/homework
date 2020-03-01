// Name: Rush Line
// ID: W840830
// Class: CSC 413
// Homework Assignment 2
// Question 2b


let arr = [30, 10, 20, 40];

//function to print arrays
function printArr(arr) {
  const end = arr.length-1
  arr.forEach((e, i) => {
    i === end ? process.stdout.write(`${e}\n`) : process.stdout.write(`${e}, `);
  });
}
//insertion sort
function insertionSort (arr){

  //initializing all variables to 0
  let i = j = key = 0;

  for (i = 0; i < arr.length; i++) {
    //setting key to current index
    key = arr[i];

    //incrementing and comparing array elements
    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
      
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
    //Print the array for each step
    printArr(arr);
  }  
  
};


   insertionSort(arr);

