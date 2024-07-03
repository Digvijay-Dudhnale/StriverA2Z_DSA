// You have been given a sorted array/list of integers 'arr' of size 'n' and an integer 'x'.
// Find the total number of occurrences of 'x' in the array/list.

#include<bits/stdc++.h>
using namespace std ;

int count(vector<int>& arr, int n, int x) {
	int first=-1,last=-1,ans ;

	int left,right,mid ;
    // for first occurrence
    left=0 ;
    right=n-1 ;

    while(left<=right){
        mid=left+(right-left)/2 ;

        if(arr[mid]==x){
            first=mid ;
            right=mid-1 ;
        }
        else if(arr[mid]<x){
            left=mid+1 ;
        }
        else{
            right=mid-1 ;
        }
    }

    // for last occurrence
    left=0 ;
    right=n-1 ;

    while(left<=right){
        mid=left+(right-left)/2 ;

        if(arr[mid]==x){
            last=mid ;
            left=mid+1 ;
        }
        else if(arr[mid]<x){
            left=mid+1 ;
        }
        else{
            right=mid-1 ;
        }
    }

	if(last==-1 && first==-1)
		return 0 ;
	ans=(last-first)+1 ;
	return ans ;
}
