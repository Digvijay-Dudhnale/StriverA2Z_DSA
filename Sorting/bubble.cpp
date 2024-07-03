// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Bubble Sort'.
// Note:
// Change in the input array itself. You don't need to return or print the elements.
// Example:
// Input: ‘N’ = 7
// 'arr' = [2, 13, 4, 1, 3, 6, 28]
// Output: [1 2 3 4 6 13 28]

#include <bits/stdc++.h>

void bubbleSort(vector<int> &arr, int n) 
{
    int temp ;

    // // bubble sort
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<n-(i+1) ; j++){
    //         if(arr[j]>arr[j+1]){
    //             temp = arr[j] ;
    //             arr[j] = arr[j+1] ;
    //             arr[j+1] = temp ;
    //         }
    //     }
    // }

    // bubble sort
    for(int i=n-1 ; i>=0 ; i--){
        for(int j=0 ; j<i ; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
}