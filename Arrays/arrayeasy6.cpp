// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.
// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.

#include <bits/stdc++.h>

vector<int> rotateArray(vector<int>arr, int k) {
    int i, temp, n ;
    n = arr.size() ;
    for(int j=0 ; j<k ; j++){

        for(i=0 ; i<n ; i++){
            if(i==0){
                temp=arr[n-1] ;
                arr[n-1]=arr[i] ;
            }
            else if(i==(n-1)){
                arr[i-1]=temp ;
            }
            else{
                arr[i-1]=arr[i] ;
            }
        }
    }
    return arr ;
}