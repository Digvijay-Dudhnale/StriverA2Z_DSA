// You are given a sorted array ‘arr’ of ‘n’ numbers such that every number occurred twice in the array except one, which appears only once.
// Return the number that appears once.

#include<bits/stdc++.h>
using namespace std ;

int singleNonDuplicate(vector<int>& arr)
{
	int arr_size ;
	int left , right , mid ;
	arr_size=arr.size() ;
	// Solution 1 using linear search
	// for(int i=0 ; i<arr_size-1 ; i++){
	// 	if(arr[i]==arr[i+1])
	// 		i++ ;
	// 	else
	// 		return arr[i] ;
	// }
	// return arr[arr_size-1] ; // for last element

	// Solution 2 using hash map
	map<int,int> mp ;
	map<int,int> :: iterator itr ;
	// for(int i=0 ; i<arr_size ; i++){
	// 	mp[arr[i]]++ ;
	// }

	// for(itr=mp.begin();itr!=mp.end();itr++){
	// 	if(itr->second==1)
	// 		return itr->first ;
	// }

	// for(auto &itr : mp){
	// 	if(itr.second==1)
	// 		return itr.first ;
	// }

	// Solution 3 using binary search
	left=0 ;
	right=arr_size-1 ;

	while(left<=right){
		mid=left+(right-left)/2;

		if(left==right)
			return arr[left] ;

		if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1])
			return arr[mid] ;

		if(arr[mid]==arr[mid+1]){
			if((right-mid)%2==0)
				left=mid+2 ;
			else
				right=mid-1 ;
		}
		else if(arr[mid]==arr[mid-1]){
			if((right-mid)%2==0)
				right=mid-2 ;
			else
				left=mid+1 ;
		}

	}
}

