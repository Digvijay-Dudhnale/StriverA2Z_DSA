// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.

#include <bits/stdc++.h> 
using namespace std ;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> ans(-1,-1) ;

    int left,right,mid ;
    // for first occurrence
    left=0 ;
    right=n-1 ;

    while(left<=right){
        mid=left+(right-left)/2 ;

        if(arr[mid]==k){
            ans.first=mid ;
            right=mid-1 ;
        }
        else if(arr[mid]<k){
            left=mid+1 ;
        }
        else{
            right=mid-1 ;
        }
    }

    // for last occurrence
    left=0 ;
    right=n-1 ;

    while(left<=right){
        mid=left+(right-left)/2 ;

        if(arr[mid]==k){
            ans.second=mid ;
            left=mid+1 ;
        }
        else if(arr[mid]<k){
            left=mid+1 ;
        }
        else{
            right=mid-1 ;
        }
    }

    return ans ;
}