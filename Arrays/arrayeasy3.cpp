// You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
// Your task is to return 1 if the given array is sorted. Else, return 0.
// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: 1
// The given array is sorted in non-decreasing order; hence the answer will be 1

#include <bits/stdc++.h>

int isSorted(int n, vector<int> a) {
    bool check=false ;
    for(int i=0 ; i<n-1 ; i++){
        if(a[i]>a[i+1]){
            check=true ;
            break;
        }
    }
    if(check)
        return 0 ;
    else
        return 1 ;
}