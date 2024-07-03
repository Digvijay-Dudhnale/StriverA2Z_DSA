// You are given an array of integers 'arr' and an integer 'limit'.
// Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given integer's limit.
// Note:
// Each result of the division is rounded to the nearest integer greater than or equal to that element. For Example, 7/3 = 3.

#include<bits/stdc++.h>
using namespace std ;

int QuotientSum(vector<int> arr, int mid) {
  int sum = 0;
  int arr_size = arr.size();
  for (int i = 0; i < arr_size; i++){
	  sum+= ceil((double)arr[i]/(double)mid) ;
  }

  return sum ;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int arr_size=arr.size() ;
	int low,high,mid ;
	low=1 ; 
	// low=*min_element(arr.begin(),arr.end()) ;
	high=*max_element(arr.begin(),arr.end()) ;

	int ans , sumOfQuotient ;
	while(low<=high){
		mid=low+(high-low)/2 ;
		sumOfQuotient = QuotientSum(arr,mid) ;

		if(sumOfQuotient<=limit){
			ans = mid ;
			high=mid-1 ;
		}
		else{
			low = mid+1 ;
		}
	}
	return ans ;
}