// Given two non-decreasing sorted arrays, ‘A’ and ‘B’, having ‘N’ and ‘M’ elements, respectively.
// You must merge these arrays, ‘A’ and ‘B’, into a sorted array without using extra space. 
// Of all the 'N + M' sorted elements, array 'A' should contain the first 'N' elements, and array 'B' should have the last 'M' elements.
// Note:
// You must perform the merge operation in place and must not allocate any extra space to merge the two arrays.

#include<bits/stdc++.h>
#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size() ;
	int m=b.size() ;
	int left=n-1 ;
	int right=0 ;

	while(left>=0 && right<m){
		if(a[left]>b[right]){
			swap(a[left],b[right]) ;
			left-- ;
			right++ ;
		}
		else{
			break ;
		}
	}
	sort(a.begin(),a.end()) ;
	sort(b.begin(),b.end()) ;
}