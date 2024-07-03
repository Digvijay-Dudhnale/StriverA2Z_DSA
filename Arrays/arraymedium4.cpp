// You are given an array 'arr' of length 'n', consisting of integers.
// A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning and 0 or more integers from the end of an array.
// Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
// The sum of an empty subarray is 0.
// Example :
// Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]
// Output: 11
// Explanation: The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].

#include<bits/stdc++.h>

long long maxSubarraySum(vector<int> arr, int n)
{
    // // my approach
    // long long ans , temp_sum ;
    // ans=0 ;
    // for(int i=0; i<n; i++){
    //     temp_sum=0 ;
    //     for(int j=i ; j<n ; j++){
    //         temp_sum+=arr[j] ;
    //         if(temp_sum>ans){
    //             ans = temp_sum ;
    //         }
    //     }
    // }
    // if(ans<0){
    //     ans = 0 ;
    //     return ans ;
    // }
    // else
    //     return ans ;

    long long temp_sum=0, ans ;
    ans=0 ;
    for(int i=0 ; i<n ; i++){
        temp_sum+=arr[i] ;
        if(ans<temp_sum)
            ans=temp_sum ;
        if(temp_sum<0) // it is better to have zero contribution than negative contribution
            temp_sum=0 ;
    }

    if(ans<0)
        return 0 ;
    else
        return ans ;
}