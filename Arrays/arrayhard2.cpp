// Given an array ‘A’ of ‘N’ integers, find the majority elements of the array.
// A majority element in an array ‘A’ of size ‘N’ is an element that appears more than floor(N / 3) times.
// Note: The floor function returns the number rounded down to the nearest integer.
// Note: Return the array of majority elements in sorted order.

#include<bits/stdc++.h>

vector<int> majorityElement(vector<int> v) {
	map<int,int> mp;
	map<int,int> :: iterator itr ;
	vector<int> ans ;
	int i, n ;
	n= v.size() ;
	for(i=0 ; i<n ; i++){
		mp[v[i]]++ ;
	}

	for(itr=mp.begin() ; itr!=mp.end() ; itr++){
		if(itr->second>floor(n/3))
			ans.push_back(itr->first) ;
	}

	return ans ;
}