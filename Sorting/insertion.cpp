// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Insertion Sort' recursively.
//  Note:
// Change in the input array itself. You don't need to return or print the elements.
// Example:
// Input: ‘N’ = 7
// 'arr' = [2, 13, 4, 1, 3, 6, 28]
// Output: [1 2 3 4 6 13 28]

#include<bits/stdc++.h>

void recursive_is(int arr[], int n){
    
    // if (n <= 1) 
    //     return; 
  
    // // Sort first n-1 elements 
    // recursive_is( arr, n-1 ); 
  
    // // Insert last element at its correct position 
    // // in sorted array. 
    // int last = arr[n-1]; 
    // int j = n-2; 
  
    // /* Move elements of arr[0..i-1], that are 
    // greater than key, to one position ahead 
    // of their current position */
    // while (j >= 0 && arr[j] > last) 
    // { 
    //     arr[j+1] = arr[j]; 
    //     j--; 
    // } 
    // arr[j+1] = last; 
    
    
    if(n==1){
        return ; // base condition
    }
    int temp, j=n-1 ;
    recursive_is(arr,n-1) ;
    while(j>0 && arr[j]<arr[j-1]){
        temp = arr[j-1] ;
        arr[j-1] = arr[j] ;
        arr[j] = temp ;
        j-- ;
    }

}


void insertionSort(int arr[], int n)
{

    recursive_is(arr,n) ; // calling recursive function





    // int j, i, temp ;

    // // insertion sort
    // for(i=1 ; i<n ; i++){
    //     j=i ;
    //     while(j>0 && arr[j]<arr[j-1]){
    //         temp=arr[j-1] ;
    //         arr[j-1]=arr[j] ;
    //         arr[j]=temp ;
    //         j-- ;
    //     }
    // }



    // // insertion sort
    // for( i=1 ; i<n ; i++){ // index 0 is already sorted
    //     for(j=i ; j>0 ; j--){
    //         if(arr[j]<arr[j-1]){
    //             temp=arr[j-1] ;
    //             arr[j-1]=arr[j] ;
    //             arr[j]=temp ;
    //         }
    //         else
    //             break ;
    //     }
    // }
}