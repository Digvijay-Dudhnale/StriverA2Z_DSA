// You are given a sorted integer array 'arr' of size 'n'.
// You need to remove the duplicates from the array such that each element appears only once.
// Return the length of this new array.
// Note:
// Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 
// For example:
// 'n' = 5, 'arr' = [1 2 2 2 3].
// The new array will be [1 2 3].
// So our answer is 3.

#include <bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
	int i=0, j=0 ;
	// bool check;
	// cout<<arr.size() ;

	// for(i=0 ; i<n ; i++){
	// 	check = true ;
 	// 	for(j=i+1 ; j<n ; j++){
	// 		 if(arr[i]==arr[j] && check){
	// 		 	arr.erase(arr.begin()+j) ;
	// 			n=arr.size() ;
	// 			check = false ;
	// 		 }
	// 		 else if(arr[i]==arr[j-1]){
	// 		 	arr.erase(arr.begin()+j) ;
	// 			n=arr.size() ;
	// 		 }
	// 	 }
	// }

	// for(i=0 ; i<n ; i++){
	// 	j=i+1 ;	
	// 	k=0 ;	
 	// 	while(arr[i]==arr[j]){
	// 		 ++k ;
	// 		 j++ ;
	// 	}
	// 	for(j=0 ; j<k ; j++){
	// 		arr.erase(arr.begin()+(i+1)) ;
	// 	}
	// 	n=arr.size() ;
	// }
	// return arr.size() ;

	while(i<n){
		if(arr[j]==arr[i])
			i++ ;
		else{
			arr[j+1]=arr[i] ;
			j++ ;
		}
	}
	return ++j ;
}