// Ninja is given an array ‘Arr’ of size ‘N’. You have to help him find the longest subarray of ‘Arr’, whose sum is 0. You must return the length of the longest subarray whose sum is 0.

#include<vector>
#include <bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int count=0, l_count=0, n=arr.size(), sum=0 ;
	// for(int i=0 ;i<n ;i++){
	// 	sum=0 ;
	// 	for(int j=i ; j<n ;j++){
	// 		sum+=arr[j] ;
	// 		if(sum==0){
	// 			count = j-i+1 ;
	// 		}
	// 	if(count>l_count)
	// 		l_count=count ;
	// 	}
	// }

	//Solution 2
	map<int,int> mp ;
	for(int i=0 ;i<n ;i++){
		sum+=arr[i] ;
		if(sum==0)
			// maxi = i+1 ;
			count = i+1 ;
		else if(mp.find(sum)!=mp.end()){
			count=i-mp[sum] ;
			// maxi = max(maxi,i-mp[sum]) ;
		}
		else
			mp[sum]=i ;

		if(count>l_count)
			l_count=count ;
	}
	return l_count ;
	// return maxi ;
}