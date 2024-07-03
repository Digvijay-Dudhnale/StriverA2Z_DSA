// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Bubble Sort'. recursively

#include<bits/stdc++.h>

void recursive(vector<int> &arr, int n){
    int temp ;
    if(n==1) // base condition
        return ;


    for(int j=0 ; j<(n-1) ; j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j] ;
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
        }
    }
    
    recursive(arr,n-1) ;
}

void bubbleSort(vector<int> &arr, int n) 
{
    // int temp ;
    recursive(arr, n) ;
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
    // for(int i=n-1 ; i>=0 ; i--){
    //     for(int j=0 ; j<i ; j++){
    //         if(arr[j]>arr[j+1]){
    //             temp = arr[j] ;
    //             arr[j] = arr[j+1] ;
    //             arr[j+1] = temp ;
    //         }
    //     }
    // }
}