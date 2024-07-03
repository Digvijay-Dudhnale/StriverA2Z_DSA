// Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.
// Given 'N', print the corresponding pattern.
// Example:
// Input: ‘N’ = 3
// Output: 
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

#include<bits/stdc++.h>

void numberCrown(int n) {
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<j<<" " ;
        }
        for(int k=1 ; k<=(n*2)-(i*2) ; k++){
            cout<<" " ;
        }
        for(int l=i ; l>0 ; l--){
            cout<<l<<" " ;
        }
        cout<<endl ;
    }
}