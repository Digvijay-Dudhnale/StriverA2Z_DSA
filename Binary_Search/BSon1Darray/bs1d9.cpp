// ou are given a rotated sorted array 'a' of length 'n' and a 'key'. You need to determine if the 'key' exists in the array 'a'.
// The given sorted array is rotated from an unknown index 'x'. Such that after rotation the array became 
// [a[x], a[x+1]...., a[n-1], a[1]..., a[x-1]], (0-based indexing). For example, 
// if the array is [1, 2, 3, 4, 5] and x = 2 then the rotated array will be [3, 4, 5, 1, 2, 3].
// Return True if the 'key' is found in 'a'. Otherwise, return False.
// Note: Array ‘a’ may contain duplicate elements.

#include<bits/stdc++.h>
using namespace std ;

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    int n,left,right,mid ;
    n=A.size() ;
    left=0 ;
    right=n-1 ;
    while(left<=right){
        mid=left+(right-left)/2 ;
        if(A[mid]==key){
            return true;
        }
        if(A[left]==A[mid] && A[mid]==A[right]){
            left=left+1 ;
            right=right-1 ;
        }
        if(A[left]<=A[mid]){ // left part is sorted
            if(key>=A[left]&&key<=A[mid])
                right=mid-1 ;
            else
                left=mid+1 ;
        }
        else{ // right part is sorted
            if(A[mid]<=key&&A[right]>=key)
                left=mid+1 ;
            else
                right=mid-1 ;
        }
    }
    return false ;
}
