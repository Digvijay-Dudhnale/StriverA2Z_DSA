// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which ‘k’ is present in 'arr'.
// Note :
// 1. If ‘k’ is not present in 'arr', then print -1.
// 2. There are no duplicate elements present in 'arr'. 
// 3. 'arr' can be rotated only in the right direction.

#include<bits/stdc++.h>
using namespace std ;

int search(vector<int>& arr, int n, int k)
{
    int ans=-1 ;
    int left,right,pivot=0,mid;
    // Linear Search
    // for(int i=0 ;i<n;i++){
    //     if(arr[i]==k)
    //         ans=i ;
    // }

    // Binary Search My Solution
    // for(int i=1 ;i<n-1;i++){
    //     if(arr[i]<arr[i-1]&&arr[i+1]>arr[i])
    //         pivot=i ;
    // }
    
    // left=pivot ;
    // right=n-1 ;
    // while(left<=right){
    //     mid=left+(right-left)/2 ;
    //     if (arr[mid] == k) {
    //         ans = mid;
    //         break;
    //     }
    //     else if (arr[mid] < k)
    //         left=mid+1 ;
    //     else
    //         right=mid-1 ;
    // }

    // left=0 ;
    // right=pivot-1 ;
    // while(left<=right && ans==-1){
    //     mid=left+(right-left)/2 ;
    //     if(arr[mid]==k){
    //         ans=mid ;
    //         break;
    //     }
    //     else if(arr[mid]<k)
    //         left=mid+1 ;
    //     else
    //         right=mid-1 ;
    // }

    left=0 ;
    right=n-1 ;
    while(left<=right){
        mid=left+(right-left)/2 ;
        if(arr[mid]==k){
            ans=mid;
            break;
        }
        if(arr[left]<=arr[mid]){ // left part is sorted
            if(k>=arr[left]&&k<=arr[mid])
                right=mid-1 ;
            else
                left=mid+1 ;
        }
        else{ // right part is sorted
            if(arr[mid]<=k&&arr[right]>=k)
                left=mid+1 ;
            else
                right=mid-1 ;
        }
    }
    return ans ;
}
