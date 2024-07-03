// There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
// Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.
// Note:
// Start the array with a positive number. 
// For example
// Input:
// A = [1, 2, -4, -5], N = 4
// Output:
// 1 -4  2 -5
// Explanation: 
// Positive elements = 1, 2
// Negative elements = -4, -5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

#include<bits/stdc++.h>

vector<int> alternateNumbers(vector<int>&a) {
    int index, i, n, j ;
    vector<int>ans, pos, neg ;
    index=i=j=0 ;
    n=a.size() ;
    // my approach
    // while(index<n){
    //     while(a[i]<0){ // for getting positive number
    //         i++ ;
    //     }
    //     while(a[j]>0){ // for getting negative number
    //         j++ ;
    //     }
    //     ans.push_back(a[i]) ; // add positive 
    //     ans.push_back(a[j]) ; // add negative
    //     index+=2 ; 
    //     i++ ; 
    //     j++ ;
    // }
    // return ans ;

    //Ninja
    for(i; i<n ; i++){
        if(a[i]<0)
            neg.push_back(a[i]) ;
        else
            pos.push_back(a[i]) ;
    }
    i=0 ;
    while(index<n){
        a[index] = pos[i] ;
        i++ ;
        index++ ;
        a[index] = neg[j] ;
        j++ ;
        index++ ;
    }
    return a ;
}