// You are given an array 'arr' of length 'n'. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.
// Peak element is defined as that element that is greater than both of its neighbors. If 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'.
// Assume 'arr[-1]' and 'arr[n]' as negative infinity.
// Note:
// 1.  There are no 2 adjacent elements having same value (as mentioned in the constraints).
// 2.  Do not print anything, just return the index of the peak element (0 - indexed).
// 3. 'True'/'False' will be printed depending on whether your answer is correct or not.

#include<bits/stdc++.h>
using namespace std ;

int findPeakElement(vector<int> &arr) {
    int arr_size ;
    arr_size=arr.size() ;
    // for(int i=0 ; i<arr_size ; i++){
    //     if(i==0 && arr[i+1]<arr[i])
    //         return i ;
    //     else if(i==arr_size-1 && arr[i-1]<arr[i])
    //         return i ;
    //     else
    //         if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
    //             return i ;
    // }

    int left , right , mid ;
    // left=0; 
    // right=arr_size-1 ;
    // while(left<=right){
    //     mid=left+(right-left)/2 ;

    //     if(left==right)
    //         return left ;

    //     if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
    //         return mid ;
    //     else if(arr[mid-1]<arr[mid+1])
    //         left = mid+1 ;
    //     else
    //         right=mid-1 ;
    // }

    int n=arr.size();
    if(n==1)
        return 0;
    if(arr[0]>arr[1])
        return 0;
    if(arr[n-1]>arr[n-2])
        return n-1;
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;
        else if(arr[mid-1]<arr[mid])
            low=mid+1;
        else if(arr[mid+1]<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
