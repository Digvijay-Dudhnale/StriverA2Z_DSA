// Given an array ‘Arr’ that has ‘N’ elements. You have to find the subarray of ‘Arr’ that has the largest product.
// You must return the product of the subarray with the maximum product.

#include<vector>
#include<bits/stdc++.h>
using namespace std ;

int subarrayWithMaxProduct(vector<int> &arr){
	int n=arr.size() ;
	int product=1, temp_product=1 ;
	// for(int i=0 ; i<n ; i++){
	// 	temp_product=1;
	// 	for(int j=i ; j<n ; j++){
	// 		temp_product=temp_product*arr[j] ;
	// 		if(temp_product>product)
	// 			product=temp_product ;
	// 	}
	// }

	// int max = arr[0];
    // // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    // 	int product = arr[i];
    //     for (int j = i+1; j < n; j++)
    //     {
	// 		product *= arr[j];
	// 		if(product > max){
	// 			max = product;
	// 		}
	// 		if(product == 0){
	// 			product = 1;
	// 		}
    //     }
    // }
    // return max;

	// int n=arr.size();
	int prod1=arr[0],prod2=arr[0],result=arr[0];
	
    for(int i=1;i<n;i++){
		int temp = max({arr[i],prod1*arr[i],prod2*arr[i]});
		prod2 = min({arr[i],prod1*arr[i],prod2*arr[i]});
		prod1 = temp;
		result = max(prod1,result);		
	}
	return result;
	// return product;
}