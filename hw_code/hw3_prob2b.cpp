//Rush Line
//SID# W840830
//Oct. 2, 2019
//HW 3 Question 2b

#include <iostream> 
#include <algorithm> 
using namespace std; 

void kDiffSortCount(int arr[], int n, int k); 
void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);

int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5};    
   
    int k = 3; 
    int n = sizeof(arr)/sizeof(*arr);                 //putting the size of the array in a variable
    
    kDiffSortCount(arr, n, k) ; 

    
    return 0;
} 
  
void merge(int arr[], int start, int mid, int end) 
{ 
    int i;
    int j;
    int k; 
    int n = mid - start + 1; 
    int m =  end - mid; 
  
    // create temporary arrays 
    int L[n], R[m]; 
  
    // Copy data to temporary arrays L[] and R[] 
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
    //Copy the remaining elements of R[], if there 
       
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
  
        // Sort first and second halves 
        mergeSort(arr, start, mid); 
        mergeSort(arr, mid + 1, end); 
  
        merge(arr, start, mid, end); 
    } 

    
} 






void kDiffSortCount(int arr[], int n, int k) 
{ 
    int count = 0;
    int steps = 0;
      // Sort array elements 
    mergeSort(arr, 0, n);  
    
    int l = 0; 
    int r = 0; 
    while(r < n){ 
         if(arr[r] - arr[l] == k){              //when the difference == k increment count and both indexes
              count++; 
              l++; 
              r++; 
              
        } 
         else if(arr[r] - arr[l] > k){ 
              l++; 
             
        }      
         else{ // arr[r] - arr[l] < k
              r++; 
              
        }  
    }  
    cout << "Number of k-diff pairs for k of "<< k << ": " << count << endl;
}    
   
    