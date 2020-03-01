//Rush Line
//SID# W840830
//Oct. 2, 2019
//HW 3 Question 2c


#include <iostream> 
#include <time.h>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std; 


void kDiffSortCount(int arr[], int n, int k); 
void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);
void bruteForce(int arr[], int n, int k);


int main() 
{ 

    
    
    const int CLOCK = 1000000;
    time_t start, end;
    double elapsed = 0.0;
    
    
    int largeSet[11000];                                 //large array   
    int k = 42;                                         //k-diff number to search        
                          
    int m = sizeof(largeSet)/sizeof(*largeSet);          //value for large array size                               
    for(int i = 0; i < m; ++i){                         //Assigns unique values to the array                      
        largeSet[i] = i;                                            

    }

    random_shuffle(&largeSet[0], &largeSet[m]);         //shuffles values into a random order
    
    cout << endl;

    //Sort Search (O(nlogn))
    //Runs the function and records the time required to complete 
    start = clock();
    kDiffSortCount(largeSet, m, k);
    end = clock();
    elapsed = double(end-start)/double(CLOCK);
    cout << "Time required to complete above function: "<<elapsed << endl << endl;
   


    //Brute force (0(n^2))
    //Runs the function and records the time required to complete 
    start = clock();
    bruteForce(largeSet, m, k); 
    end = clock();
    elapsed = double(end-start)/double(CLOCK);
    cout << "Time required to complete above function: " << elapsed << endl << endl;
    return 0;
} 
  
void merge(int arr[], int start, int mid, int end) 
{ 
    int i;
    int j;
    int k; 
    int n = mid - start + 1; 
    int m =  end - mid; 
  
    // create temp arrays 
    int L[n], R[m]; 
  
    //Copy data to temp arrays L[] and R[] 
    for (i = 0; i < n; i++) 
        L[i] = arr[start + i]; 
    for (j = 0; j < m; j++) 
        R[j] = arr[mid + 1 + j]; 
  
   
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = start; // Initial index of merged subarray 
    while (i < n && j < m){ 
        if (L[i] <= R[j]){ 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    }   
    //Copy the remaining elements of R[]
    while (j < m){ 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int start, int end) 
{ 
    if (start < end) 
    { 
        
        int mid = start + (end - start)/2; 
  
       //sort the halves
        mergeSort(arr, start, mid); 
        mergeSort(arr, mid + 1, end); 
  
        merge(arr, start, mid, end); 
    } 

    
} 







void kDiffSortCount(int arr[], int n, int k) 
{ 
    
    int count = 0;

      // Sort array elements 
    mergeSort(arr, 0, n);  
    
    int l = 0; 
    int r = 0; 
    while(r < n) 
    { 
         if(arr[r] - arr[l] == k) 
        { 
              count++; 
              l++; 
              r++; 
        } 
         else if(arr[r] - arr[l] > k) 
              l++; 
         else // arr[r] - arr[l] < sum 
              r++; 
    }
    cout << "Number of k-diff pairs found for a k of "<< k << " using kDiffSortCount function: " << count << " \n" << endl;     
    
}    
  
   

void bruteForce(int arr[],int n, int k){
    int count = 0;
    int i, j;            
    
    
    //Nested for-loops to count k diff pairs
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            
            if(abs(arr[i] - arr[j]) == k){

                ++count;
            }
        }
    }
    cout << "Number of k-diff pairs found for a k of "<< k << " using brute force method: " << (count/2) << " \n "<< endl;
}

