 #include <iostream>
 #include <stdio.h>
  #include <stdlib.h>
#include <array>
           
	using namespace std;

	void printArray (int array[], int n);

   int main()
   {

      int array[4] = {30, 10, 20, 40};
      //{7, 6, 12, 3, 4, 5, 11, 9, 14, 2, 8};
      int i, j, n, key, temp,no_swap=0,comp=0;//variables to find out swaps and comparisons 
      n = 4;
      
      printArray(array, n);
/*Sort*/
      for (i = 1; i < n; i++) {
      j = i;
      comp++;
      while ((j >= 0) && (array[j - 1] > array[j])) {
            if(array[j-1]>array[j]){
            comp++;

        }
        temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
        j--;
        // printArray(array, n);
        no_swap++;//increment swap variable when actually swap is done
        // printArray(array, n);
    }
     printArray(array, n);
}
/* Print */

	cout << "Number of Comparisons: " << comp << endl;
      
   //    for (int i = 0; i < n; i++)
   //        //cout << array[i] << endl;
   //    	if(i != n-1){
   //        cout << "[" << array[i] << ", ";
 		// }
 		// else{
 		// 	cout << array[i] <<"]" << endl;
 		// }
   //    return 0;
 }



 void printArray (int array[], int n){
 	cout <<"[";
 	for (int i = 0; i < n; i++){
 		if(i != n-1){
          cout << array[i] << ", ";
 		}
 		else{
 			cout << array[i] <<"]" << endl;
 		}
    }
 }


// #include <iostream>

// using namespace std;

// void insertionSort(int array[], int n);
// void printArray(int array[], int n);
// int count;
// int main(){
// 	int n = 4;
// 	int array[n] = {30, 10, 20, 40};

// 	insertionSort(array, n);


// 	return 0;
// }

// void insertionSort(int array[], int n){
	
//     int i;
//     int j;
//     int key; 

//     // Reset COUNT on initial run.
//     count = 0;

//     // insertion sort begins with second element.
//     for (i = 1; i < n; i++){ 
//         count++;
//         key = array[i];
//         j = i - 1; 

//         // print the input array for each step.
//         printArray(array, n);
        
//         while (j >= 0 && array[j] > key){ 
//             // helper to print the locals part 2a
//             // printLocal(i, j, key, arr[j], arr[j+1]);
//             array[j + 1] = array[j]; 
//             j = j - 1; 
            
//         } 
//         array[j + 1] = key;
//     } 
// } 


// void printArray(int array[], int n){
// 	cout << "[";
// 	for(int i = 0; i < n; ++i){
// 		if (i != n-1){
// 			cout << array[i] << ", ";
// 		}
// 		else{
// 			cout <<array[i] <<"]" << endl;
// 		}
// 	}
// 	cout << count << endl;
// }