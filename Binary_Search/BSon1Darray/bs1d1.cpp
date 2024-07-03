// You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.
// Your task is to write a function to search for 'target' in the array 'A'. 
// If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

#include <bits/stdc++.h>
using namespace std ;

// Recursive Binary Search
int b_search(vector<int> &nums, int left, int right, int target)
{
    if (left > right)
        return -1;
    int mid;
    mid = (left + right) / 2;

    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
        b_search(nums, mid + 1, right, target);
    else
        b_search(nums, left, mid - 1, target);
}

int search(vector<int> &nums, int target)
{

    // Iterative Binary Search
    int n, result = -1;
    n = nums.size();
    int left, right, mid;
    left = 0;
    right = n - 1;
    // while(left<=right){
    //     mid = (left+right)/2 ;
    //     if(nums[mid]==target){
    //         result = mid ;
    //         break;
    //     }
    //     else if(nums[mid]<target){
    //         left=mid+1 ;
    //     }
    //     else{
    //         right=mid-1 ;
    //     }
    // }

    result = b_search(nums, left, right, target);
    return result;
}