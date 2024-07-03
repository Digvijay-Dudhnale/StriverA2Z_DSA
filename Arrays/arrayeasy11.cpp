// You are given a sorted array 'arr' of positive integers of size 'n'.
// It contains each number exactly twice except for one number, which occurs exactly once.
// Find the number that occurs exactly once.
// Example :
// Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.
// Output: 2
// Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.

#include <bits/stdc++.h>
#include<vector>

int getSingleElement(vector<int> &arr){
	int n, i ;
	n = arr.size() ; // total elements in an array

	for(i=0;i<n-1;i++){ 
		
		if(arr[i]==arr[i+1]){
			i++ ; // required to jump on to next different element 
		}
		else
			return arr[i] ; 
	}

	return arr[n-1]	; // returns if the last element is appeared only once
}