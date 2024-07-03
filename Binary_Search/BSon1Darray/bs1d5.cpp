// You're given a sorted array 'a' of 'n' integers and an integer 'x'.
// Find the floor and ceiling of 'x' in 'a[0..n-1]'.
// Note:
// Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
// Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.

#include<bits/stdc++.h>
using namespace std ;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> ans ;
	ans.first=-1 ;
	ans.second=-1 ;
	int left,right,mid ;
	left=0;
	right=n-1;

	while(left<=right){
		mid=left+(right-left)/2 ;
		if(a[mid]==x){
			ans.first=x ;
			ans.second=x ;
			break;
		}
		else if(a[mid]<x){
			ans.first = a[mid] ;
			left=mid+1 ;
		}
		else{
			ans.second = a[mid] ;
			right=mid-1 ;
		}
	}
		
	return ans ;
}