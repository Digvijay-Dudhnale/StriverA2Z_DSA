// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// *****
//  ***
//   *

#include<bits/stdc++.h>

void nStarTriangle(int n) {
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<i ; j++){
            cout<<" ";
        }

        for(int k=0 ; k<((n-i)*2+1) ; k++){
            cout<<"*" ;
        }
        cout<<endl ;
    }
}