// Given an array ‘arr’ of size ‘n’ find the largest element in the array.
// Example:
// Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: 5
// Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

#include <bits/stdc++.h> 

int motha_element(vector<int> &arr, int n) {
    
    int largenum=0 ;
    for(int i=0 ; i<n;i++){
        if(arr[i]>largenum)
            largenum=arr[i] ;
    }
    return largenum ;

}
