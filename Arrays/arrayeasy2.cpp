// You have been given an array ‘a’ of ‘n’ unique non-negative integers.
// Find the second largest and second smallest element from the array.
// Return the two elements (second largest and second smallest) as another array of size 2.
// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: [4, 2]
// The second largest element after 5 is 4, and the second smallest element after 1 is 2.

#include <bits/stdc++.h>

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector <int> ans ;
    int temp ;
    // sort(a.begin(),a.end()) ;
    // for(int i=0 ; i<n-1 ; i++){
    //     for(int j=0 ; j<n-i-1 ; j++){
    //         if(a[j]>a[j+1]){
    //             temp = a[j] ;
    //             a[j] = a[j+1] ;
    //             a[j+1] = temp ;
    //         }
    //     }
    // }
    int lnum=-1, snum=1e9+1, ssnum=1e9+1, slnum=-1 ;
    
    for(int i=0 ; i<n ; i++){
        if(lnum<a[i]){
            slnum = lnum ;
            lnum=a[i] ;
        }
        else if(slnum<a[i])
            slnum = a[i] ;


        if(snum>a[i]){
            ssnum = snum ;
            snum=a[i] ;
        }
        else if(ssnum>a[i])
            ssnum = a[i] ;
    }
    
    // for(int i=a.begin() ; i!=a.end() ; i++){
    //     if(lnum==a[i])
    //         a.erase(i) ;
    //     if(snum==a[i])
    //         a.erase(i) ;
    // }
    
    // // int tdiff=lnum-a[0], diff ;
    // for(int i=1 ; i<n-2 ; i++){
    //     // diff = lnum-a[i] ;
    //     if(slnum<a[i])
    //         slnum=a[i] ;

    //     // diff = a[i]-snum ;
    //     if(ssnum>a[i])
    //         ssnum=a[i] ;
    // }
    
    ans.push_back(slnum) ;
    ans.push_back(ssnum) ;

    return ans ;
}