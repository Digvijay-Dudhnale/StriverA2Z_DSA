// Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.
//  Note:
// Change in the input array/list itself. 
// Example:
// Input:
// N = 5
// arr = {8, 6, 2, 5, 1}
// Output:
// 1 2 5 6 8 

#include<bits/stdc++.h>

void selectionSort(vector<int>&arr) {
    int temp, n, min ;
    n = arr.size() ;

     // selection sort
    for(int i=0 ; i<n ; i++){
        min = i ;
        for(int j=i+1 ; j<n ; j++){
          if (arr[min] > arr[j]) {
              min = j ;
          }
        }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
    }

    // // selection sort
    // for(int i=0 ; i<n ; i++){

    //     for(int j=i+1 ; j<n ; j++){
    //       if (arr[i] > arr[j]) {
    //         temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //       }
    //     }
    // }

    int k=0 ;
    // if I take n as an exit condition it is printing the array double
    while(k<0){ // can't understand the problem 
        k=k+1 ;
        cout<<arr[k]<<" " ;
    }
}