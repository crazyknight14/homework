//Rush Line
//SID# W840830
//Oct. 2, 2019
//HW 3 Question 2a

#include<iostream>
#include <cstdlib>
#include <array>

using namespace std;

void kDiff(int arr[], int n, int k);

 
 
int main()
{

	int arr[] = {1, 2, 3, 2, 1, 5, 3, 4, 5};					
	int k = 1;									//difference value
	int n = sizeof(arr)/sizeof(*arr);			//putting the size of the array in a variable
	kDiff(arr, n, k);							//function call

	
 
	return 0;
}

void kDiff(int arr[],int n, int k){
	int count = 0;
	int i, j, m;
	
	//Remove duplicate values from the array
	// for(i = 0; i < n; ++i)
	// 	for(j = i + 1; j < n;)
	// 	{
	// 		if(arr[i] == arr[j])
	// 		{
	// 			for(m = j; m < n-1; ++m)
	// 				arr[m] = arr[m + 1];
					
	// 			--n;
	// 		}
	// 		else
	// 			++j;
	// 	}

	

	//Nested for-loops to count k diff pairs
	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j){
			
			if(abs(arr[i] - arr[j]) == k){

				++count;
			}
		}
	}
	cout << "Count of pairs with given diff is " << (count/2) << endl;
}