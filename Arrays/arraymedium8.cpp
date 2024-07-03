// There is an integer array ‘a’ of size ‘n’.
// An element is called a Superior Element if it is greater than all the elements present to its right.
// You must return an array all Superior Elements in the array ‘a’.
// Note:
// The last element of the array is always a Superior Element. 
// Example
// Input: a = [1, 2, 3, 2], n = 4
// Output: 2 3

#include<bits/stdc++.h>

vector<int> superiorElements(vector<int>&a) {
    vector<int> ans ;
    int n = a.size() ;
    bool superior ;
    ans.push_back(a[n-1]) ; // last element is always superior

    // MY SOLUTION  
    // for(int i=n-2 ; i>=0 ; i--){ // iterating from second last element 
    //     superior = true ;
    //     for(int j=n-1 ; j>i ; j--){ // checking elements to the right 
    //         if(a[j]>=a[i]){
    //             superior = false ;
    //             break;
    //         }
    //     }
    //     if(superior)
    //         ans.push_back(a[i]) ;
    // }

    int max = a[n-1] ;
    for(int i=n-2 ; i>=0 ; i--){
        if(a[i]>max){
            ans.push_back(a[i]) ;
            max = a[i] ;
        }
    }
    return ans ;
}