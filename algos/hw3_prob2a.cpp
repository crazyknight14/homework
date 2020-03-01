//Rush Line
//SID# W840830
//Oct. 2, 2019
//HW 3 Question 2a


#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

void kDiff(int arr[], int n, int k);

int main(){

int arr[] = {1, 2, 3, 4, 5};					
int k = 3;									//difference value
int n = sizeof(arr)/sizeof(*arr);			//putting the size of the array in a variable
kDiff(arr, n, k);							//function call


	return 0;
}
	

void kDiff(int arr[],int n, int k){					//using nested for-loops to increment 
	int count = 0;									//through the array
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			
			if(abs(arr[i] - arr[j]) == k){			//finding absolute value of differneces

				++count;							
			}
		}
	}
	//count/ 2 because it reads each distinct pair twice (i, j) and (j, i)
	cout << "Number of k-diff pairs for k of "<< k << ": " << (count/2) << endl;
}