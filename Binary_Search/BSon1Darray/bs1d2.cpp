// You are given an array 'arr' sorted in non-decreasing order and a number 'x'.
// You must return the index of lower bound of 'x'.
// Note:
// For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'
// If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.
// Consider 0-based indexing.

#include<bits/stdc++.h>
using namespace std ;

int lowerBound(vector<int> arr, int n, int x) {
	// My Solution
	// if(arr[n-1]<x)
	// 	return n ; // if all elements are small than x
	// if(arr[0]>x)
	// 	return 0 ; // if all elements are greater than x

	// int left , right , mid , result ;
	// left = 0 ;
	// right=n-1;
	
	// while(left<=right){
	// 	mid=(left+right)/2 ;

	// 	if (arr[mid] == x && arr[mid-1]!=x) { // if x is present
	// 		result = mid;
	// 		break ;
	// 	}
	// 	else if (arr[mid] < x)
	// 		left = mid + 1;
	// 	else{
	// 		if(arr[mid-1]<x) // smallest element greater than x
	// 			result=mid ;
	// 		right=mid-1 ;
	// 	}
	// }

	// return result ;

	//Optimal and easy code
	int left=0, right=n, mid ;

	while(left<right){
		mid=(left+right)/2 ;
		if(arr[mid]<x)
			left=mid+1;
		else
			right=mid;
	}
	return right ;
}
