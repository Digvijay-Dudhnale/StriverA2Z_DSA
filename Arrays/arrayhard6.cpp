// Given an array ‘A’ consisting of ‘N’ integers and an integer ‘B’,
// find the number of subarrays of array ‘A’ whose bitwise XOR( ⊕ ) of all elements is equal to ‘B’.
// A subarray of an array is obtained by removing some(zero or more) elements from the front and back of the array.
// Example:
// Input: ‘N’ = 4 ‘B’ = 2
// ‘A’ = [1, 2, 3, 2]
// Output: 3

#include<bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {
    int count=0, n=a.size();
    // map<int,int> mp ;
    // mp[0]=1 ;
    // int xr=0, x ;
    // for(int i=0; i<n ;i++){
    //     xr=xr^a[i] ;
    //     x=xr^b ;
    //     count+=mp[x] ;
    //     mp[xr]++ ;
    // }

    //Solution 2
    for(int i=0 ;i<n ;i++){
        int xr=0 ;
        for(int j=i ;j<n ;j++){
            xr=xr^a[j] ;
            if(xr==b) 
                count++ ;
        }
    }
    return count ;
}