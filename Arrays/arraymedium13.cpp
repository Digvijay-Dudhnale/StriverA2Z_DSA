// You are given an integer array 'arr' of size 'N' and an integer 'K'.
// Your task is to find the total number of subarrays of the given array whose sum of elements is equal to k.
// A subarray is defined as a contiguous block of elements in the array.
// Example:
// Input: ‘N’ = 4, ‘arr’ = [3, 1, 2, 4], 'K' = 6
// Output: 2
// Explanation: The subarrays that sum up to '6' are: [3, 1, 2], and [2, 4].

#include<bits/stdc++.h>

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int count, n, i, j, sum ;
    count=0 ;
    n=arr.size() ;
    
    // first solution
    // for(i=0; i<n ; i++){
    //     sum=0 ;
    //     for(j=i; j<n ; j++){
    //         sum=sum+arr[j] ;
    //         if(sum>k)
    //             break ;
    //         else if(sum==k)
    //             count++ ;
    //     }
    // }

    // second solution    
    // i=0 ;
    // j=0 ;
    // sum=0 ;
    // count=0 ;
    // while(j<=i){
    //     if(sum<k && i==n)
    //         break;
    //     else if(sum<k){
    //         sum=sum+arr[i] ;
    //         i++ ;
    //     }
    //     else if(sum==k){
    //         sum=sum-arr[j] ;
    //         j++ ;
    //         count++ ;
    //     }
    //     else{
    //         sum=sum-arr[j] ;
    //         j++ ;
    //     }
    // }

    // third solution
    map<int,int> mpp ;
    int removal ;
    sum=0 ;
    mpp[0]=1 ;
    for(i=0 ; i<n ; i++){
        sum+=arr[i] ;
        removal=sum-k ;
        count=count+mpp[removal] ;
        mpp[sum]++ ;
    }
    return count ;

}