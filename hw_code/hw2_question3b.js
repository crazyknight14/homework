// Name: Rush Line
// ID: W840830
// Class: CSC 413
// Homework Assignment 2
// Question 3b


//initializing array
let arr = [30, 10, 20, 40];

//fuction to print array
function printArr(arr) {
  const end = arr.length-1
  arr.forEach((e, i) => {
    i === end ? process.stdout.write(`${e}\n`) : process.stdout.write(`${e}, `);
  });
}


function insertionSort (arr){
  //initializing all required variables
  let count = i = j = key = 0;

  for (i = 0; i < arr.length; i++) {
    //incrementing counter
    ++count;
    //setting key to current index
    key = arr[i];

    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
      
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
   
  }
  //print sorted array
  printArr(arr);
  //print total number of comparisons
  console.log(`Total Comparisons: ${count}`);
 
};

  //function call
   insertionSort(arr);

