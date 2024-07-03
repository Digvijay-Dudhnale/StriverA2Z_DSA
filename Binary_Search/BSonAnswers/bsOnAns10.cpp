// Given an integer array ‘A’ of size ‘N’ and an integer ‘K'.
// Split the array ‘A’ into ‘K’ non-empty subarrays such that the largest sum of any subarray is minimized.
// Your task is to return the minimized largest sum of the split.
// A subarray is a contiguous part of the array.
// Example:
// Input: ‘N’ = 5, ‘A’ = [1, 2, 3, 4, 5], ‘K’ = 3
// Output: 6
// Explanation: There are many ways to split the array ‘A’ into K consecutive subarrays. 
// The best way to do this is to split the array ‘A’ into [1, 2, 3], [4], and [5], 
// where the largest sum among the three subarrays is only 6.

#include<bits/stdc++.h>
using namespace std ;

int isPossible(vector<int>a, int k , int mid){

    int arrayCount=1 ;
    int smallestElement = *min_element(a.begin(),a.end()) ;
    int totalSum = accumulate(a.begin(),a.end(),0) ;
    int tempSum=0, sum=0 ;
    for(int i=0 ; i<a.size() ; i++){
        if(tempSum+a[i]<=mid){
            tempSum+=a[i] ;
        }
        else{
            if(tempSum>sum) // if the subarray has larger sum
                sum=tempSum ;
            arrayCount++ ;
            if(arrayCount>k || tempSum>mid)
                return totalSum ; // we need to increase the sum
            tempSum=a[i] ;
        }
    }
    // if(arrayCount==k)
    //     return sum ; 
    // else
    //     return smallestElement ; // we need to reduce the sum
    return sum ;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int low, high, mid, ans ;
    low=*min_element(a.begin(),a.end()) ;
    high=accumulate(a.begin(),a.end(),0) ;

    while(low<=high){

        mid=low+(high-low)/2 ;
        int sum = isPossible(a,k,mid) ;
        if(sum<=mid){ // possible answer
            ans = mid ;
            high = mid-1 ;
        }
        else{
            low = mid+1 ;
        }
    }
    return ans ;
}