// You are given 'n' roses and you are also given an array 'arr' where 'arr[i]' denotes that the 'ith' rose will bloom on the 'arr[i]th' day.
// You can only pick already bloomed roses that are adjacent to make a bouquet. You are also told that you require exactly 'k' adjacent bloomed roses to make a single bouquet.
// Find the minimum number of days required to make at least 'm' bouquets each containing 'k' roses. Return -1 if it is not possible.

#include<bits/stdc++.h>
using namespace std ;

int NoOfBouquet(vector<int>arr,int k , int mid){
	int count=0 ;
	int arr_size=arr.size() ;
	int totalBouquet=0 ;
	
	for(int i=0 ; i<arr_size ; i++){
		if(arr[i]<=mid){
			count++ ;
		}
		else{
			totalBouquet=totalBouquet+(count/k) ;
			count=0 ;
			continue;
		}
	}
	totalBouquet=totalBouquet+(count/k) ;
	// cout<<totalBouquet ;
	return totalBouquet ;
}

int roseGarden(vector<int> arr, int k, int m)
{
	int arr_size=arr.size(), max_days=0 ;
	int bouquets ;


	for(int i=0 ; i<arr_size ; i++){
		if(arr[i]>max_days)
			max_days=arr[i] ;
	}
	
	int low, high, mid ;
	// low=*min_element(arr.begin(),arr.end()) ;
	// high=*max_element(arr.begin(),arr.end()) ;

	low=1 ;
	high=max_days ;

	if(m*k>arr_size) // if number of roses is less than required
		return -1 ;

	int ans ;
	ans=-1 ;
	while(low<=high){

		mid=low+(high-low)/2 ;
		bouquets = NoOfBouquet(arr,k,mid) ;
		
		if(bouquets>=m){
			ans = mid ;
			high=mid-1 ;
		}
		else
			low=mid+1 ;
	}
	// if(bouquets>=m)
	// 	return ans ;
	
	// return -1 ;
	return ans ;
}