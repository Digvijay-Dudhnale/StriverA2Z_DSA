// You are given an array 'a' of 'n' integers.
// A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
// Find the majority element of the array.
// It is guaranteed that the array 'a' always has a majority element.
// Example:
// Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
// Output: 1
// Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
// Hence ‘1’ is the majority element.

#include<bits/stdc++.h>

int majorityElement(vector<int> v) {
	// using map stl
	// int n = v.size() ;
	// map<int,int> mp ;
	// map<int,int> :: iterator itr ;
	// for(int i=0 ; i<n ;i++){
	// 	mp[v[i]]++ ;
	// }

	// for(itr=mp.begin();itr!=mp.end();itr++){
	// 	if(itr->second>(n/2)){
	// 		return itr->first ;
	// 	}
	// }

	// using nested for loop
	int count, n=v.size() ;
	for(int i=0 ; i<n ; i++){
		count = 0 ;
		for(int j=i ; j<n ; j++){
			if(v[i]==v[j])
				count++ ;
		}
		if(count>(n/2))
			return v[i] ;
	}
}