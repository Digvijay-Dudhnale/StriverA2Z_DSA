// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.
// Example :
// Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
// Output: [1, 2, 2, 3, 0, 0]
// Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.

#include <bits/stdc++.h>

vector<int> moveZeros(int n, vector<int> a) {
    int temp, i, j ;
    for(i=0 ; i<n ;i++){
        if(a[i]==0){
            for(j=i+1 ; j<n ; j++){
                if(a[j]!=0){
                    temp = a[j];
                    a[j]=0;
                    a[i]=temp;
                    break ;
                }
            }
        }
    }
    return a ;
}