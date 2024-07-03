// Given an array 'arr' of size 'n'.
// Return an array with all the elements placed in reverse order.
// Note:
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: n = 6, arr = [5, 7, 8, 1, 6, 3]
// Output: [3, 6, 1, 8, 7, 5]

#include<bits/stdc++.h>

void reverse_array(int n, vector<int>nums, vector<int>&ans){ // recursive function
    // int temp ;
    if(n==0)
        return ;
    // temp = nums[i] ;
    // nums[i] = nums[n-1] ;

    ans.push_back(nums[n-1]) ;
    reverse_array(n-1,nums,ans) ;
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // int i=0 ;
    vector<int> ans ;
    reverse_array(n,nums,ans) ;
    return ans ;
}
