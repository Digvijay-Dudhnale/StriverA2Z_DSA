// You are given a strictly increasing array 'vec' and a positive integer 'k'.
// Find the 'kth' positive integer missing from 'vec'.
// Example :
// Input: vec = [2,4,5,7] , k = 3
// Output: 6
// Explanation :
// In the given example, first missing positive integer is 1 second missing positive integer is 3, and the third missing positive integer is 6.
// Hence the answer is 6.

#include<bits/stdc++.h>
using namespace std ;

// int totalMissingValues(vector<int>vec, int n , int mid){
//     for(int i=0 ; i<n ; i++){

//     }
// }

int missingK(vector < int > vec, int n, int k) {
    
    // int arrSize = vec.size() ;
    int ans, mid, ansIndex ;
    int low=0 ;
    int high=n-1 ;
    int missingNumbers ;
    while(low<=high){
        mid= low+(high-low)/2 ;

        // missingNumbers = totalMissingValues(vec,n,mid) ;
        missingNumbers = vec[mid]-(mid+1) ;

        // if(missingNumbers<k){
        //     ansIndex=mid ;
        //     low=mid+1 ;
        // }
        // else if(missingNumbers==k){
        //     high=mid ;
        //     ansIndex=mid ;
        //     if(low==high)
        //         break ;
        // }
        // else{
        //     ansIndex = high ; 
        //     high=mid-1 ;
        // }

        if(missingNumbers<k){
            low = mid+1 ;
        }
        else{
            high=mid-1 ;
        }
    }


    // if(missingNumbers==k){
    //     ans = vec[ansIndex]-1 ;
    //     return ans ;
    // }
    // else if(missingNumbers<k){
    //     ans = vec[ansIndex] + (k-missingNumbers) ;
    //     return ans ;
    // }
    // else{
    //     return k ;
    // }

    missingNumbers = vec[high]-(high+1) ;
    ans = vec[high]+(k-missingNumbers) ;

    return ans ;
}
