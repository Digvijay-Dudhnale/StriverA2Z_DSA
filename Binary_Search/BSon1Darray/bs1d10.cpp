// You are given an array 'arr' of size 'n' having unique elements that has been sorted 
// in ascending order and rotated between 1 and 'n' times which is unknown.
// The rotation involves shifting every element to the right, with the last element moving to the first position. 
// For example, if 'arr' = [1, 2, 3, 4] was rotated one time, it would become [4, 1, 2, 3].
// Your task is to find the minimum number in this array.


#include<bits/stdc++.h>
using namespace std ;

int findMin(vector<int>& arr)
{
	
	int left,right,mid ;
	int sizeOfArray ;
	sizeOfArray = arr.size() ;
	left = 0 ;
	right = sizeOfArray-1 ;
	// // My Solution
	// // if there is only one element in array
	// if(sizeOfArray==1)
	// 	return arr[0] ;

	// while(left<=right){
	// 	mid=left+(right-left)/2 ;

	// 	// if array is rotated size-1 times
	// 	if(mid==sizeOfArray-1)
	// 		if(arr[mid]<arr[mid-1])
	// 			return arr[mid] ;

	// 	// if array is not rotated 
	// 	if(mid==0)
	// 		if(arr[mid]<arr[mid+1])
	// 			return arr[mid] ;
		
	// 	if(arr[mid]<arr[mid+1]&&arr[mid]<arr[mid-1])
	// 		return arr[mid] ;
	// 	else if(arr[left]<=arr[mid] && arr[left]>arr[right])
	// 		left = mid+1 ;
	// 	else
	// 		right = mid-1 ;
	// }

	// Solution 2
	int next,previous ;
	while(left<=right){

		// if array is not rotated or there is only one element
		if(arr[left]<=arr[right])
			return arr[left] ;

		mid=left+(right-left)/2 ;
		next=(mid+1)%sizeOfArray ;
		previous=(mid+sizeOfArray-1)%sizeOfArray ;

		if(arr[mid]<=arr[next]&&arr[mid]<=arr[previous])
			return arr[mid] ;
		else if(arr[mid]<=arr[right])
			right = mid-1 ;
		else if(arr[mid]>=arr[left])
			left = mid+1 ;
	}
	return -1 ;
}