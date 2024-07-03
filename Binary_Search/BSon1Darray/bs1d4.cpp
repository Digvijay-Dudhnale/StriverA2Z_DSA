// You are given a sorted array 'arr' of distinct values and a target value 'm'.
// You need to search for the index of the target value in the array.
// Note:
// If the value is present in the array, return its index.
// If the value is absent, determine the index where it would be inserted in the array while maintaining the sorted order. 

#include<bits/stdc++.h>
using namespace std ;

int searchInsert(vector<int>& arr, int m)
{
	// int n ;
	// n=arr.size() ;
	// if(n==0)
	// 	return 0 ;
	// int left,right,mid;
	// left=0;
	// right=n-1;
	// while(left<=right){
	// 	// mid=(left+right)/2 ;
	// 	mid=left+(right-left)/2 ;
	// 	if(arr[mid]==m)
	// 		return mid ;
	// 	else if(arr[mid]<m)
	// 		left=mid+1 ;
	// 	else
	// 		right=mid-1 ;
	// }

	// if(arr[mid]<m)
	// 	return mid+1 ;
	// else
	// 	return mid ;

	int low = 0;
    int high = arr.size()-1;
    int mid = low + (high-low)/2;
    int ans = arr.size();
    while(low<=high){
        if(arr[mid] >= m){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
        mid = low + (high-low)/2;
    }
    return ans;
}