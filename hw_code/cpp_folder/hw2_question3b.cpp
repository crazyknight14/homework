#include <iostream>

using namespace std;

void insertionSort(int array[], int n);
void printArray(int array[], int n);
int count;
int main(){
	int n = 4;
	int m = 12;
	int arrB[n] = {30, 10, 50, 40};
	int arrA[m] = {7, 6, 12, 9, 3, 4, 5, 11, 9, 14, 2, 8};

	insertionSort(arrB, n);
	insertionSort(arrA, m);


	return 0;
}

void insertionSort(int array[], int n){
	
    int i;
    int j;
    int key; 
    printArray(array, n);
    // Reset COUNT on initial run.
    count = 0;

    // insertion sort begins with second element.
    for (i = 1; i < n; ++i){ 
        count++;
        key = array[i];
        j = i - 1; 

        // print the input array for each step.
        printArray(array, n);
        
        while (j >= 0 && array[j] > key){ 
            // helper to print the locals part 2a
            // printLocal(i, j, key, arr[j], arr[j+1]);
            array[j + 1] = array[j]; 
            j = j - 1; 
            
        } 
        array[j + 1] = key;
    } 
    cout << count << endl;
} 


void printArray(int array[], int n){
	cout << "[";
	for(int i = 0; i < n; ++i){
		if (i != n-1){
			cout << array[i] << ", ";
		}
		else{
			cout <<array[i] <<"]" << endl;
		}
	}
	
}