// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// *
// **
// ***
// **
// *

#include<bits/stdc++.h>

void nStarTriangle(int n) {
    int i, j, row ;
    row = (n*2)-1 ;
    for(i=1 ; i<=row ; i++){
        if(i<=n){
            for(j=1 ; j<=i ; j++){
                cout<<"*" ;
            }
            cout<<endl ;
        }
        if(i>n){
            for(j=1 ; j<=(n*2)-i ; j++){
                cout<<"*" ;
            }
            cout<<endl ;
        }
    }
}