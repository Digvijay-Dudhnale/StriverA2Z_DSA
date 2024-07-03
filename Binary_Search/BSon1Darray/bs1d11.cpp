// You are given an array 'arr' having 'n' distinct integers sorted in ascending order. The array is right rotated 'r' times
// Find the minimum value of 'r'.
// Right rotating an array means shifting the element at 'ith' index to (‘i+1') mod 'n' index, for all 'i' from 0 to ‘n-1'.

#include<bits/stdc++.h>
using namespace std ;

int findKRotation(vector<int> &arr){
    int left, arrRotated , right, mid ;
    int arr_size ;
    arr_size=arr.size() ;

    left=0 ;
    right=arr_size-1 ;

    while(left<=right){
        if(arr[left]<=arr[right])
            return left ;

        mid=left+(right-left)/2 ;
        int next = (mid+1)%arr_size ;
        int previous = (mid+arr_size-1)%arr_size ;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[previous])
            return mid ;
        else if(arr[mid]<=arr[right])
            right=mid-1 ;
        else if(arr[mid]>=arr[left])
            left=mid+1 ;    
    }    
}