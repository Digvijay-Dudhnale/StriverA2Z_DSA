// You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.
// Implement the ‘upperBound’ function to find the index of the upper bound of 'x' in the array.
// Note:
// The upper bound in a sorted array is the index of the first value that is greater than a given value. 
// If the greater value does not exist then the answer is 'n', Where 'n' is the size of the array.
// We are using 0-based indexing.
// Try to write a solution that runs in log(n) time complexity.

#include<bits/stdc++.h>
using namespace std ;

int upperBound(vector<int> &arr, int x, int n){
	// if(arr[0]>x)
    //     return 0 ;
    // if(arr[n-1]<=x) 
    //     return n ;

    // int left=0,right=n-1,mid;
    // while(left<=right){
    //     mid=(left+right)/2 ;
    //     if(arr[mid]==x && arr[mid+1]!=x)
    //         return mid+1 ;
    //     else if(arr[mid]<=x)
    //         left=mid+1 ;
    //     else{
    //         if(arr[mid-1]==x)
    //             return mid ;
    //         right=mid-1 ;
    //     }
    // }

    int result=n ;
    int left,right,mid;
    left=0 ;
    right=n-1 ;
    while(left<=right){
        mid=(left+right)/2 ;

        if(arr[mid]<=x)
            left=mid+1 ;
        else if (arr[mid]>x){
            result = mid;
            right = mid - 1;
        }
    }

    return result ;
}