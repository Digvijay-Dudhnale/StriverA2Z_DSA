// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.
// Example:
// Input: ‘N’ = 3
// Output: 
//   *
//  ***
// *****
// *****
//  ***
//   *

#include<bits/stdc++.h>

void nStarDiamond(int n) {
    int i, j, k, row ;
    row = (n*2) ;
    for(i=1 ; i<=row ; i++){
        if(i<=n){
            for(j=1 ; j<=(n-i) ; j++){
                cout<<" " ;
            }

            for(k=1 ; k<=(i*2)-1 ; k++){
                cout<<"*" ;
            }
            cout<<endl ;
        }

        if(i>n){
            for(j=n+1 ; j<i ; j++){
                cout<<" " ;
            }

            for(k=1 ; k<=((row-i)*2+1) ; k++){
                cout<<"*" ;
            }
            cout<<endl ;
        }
    }
}