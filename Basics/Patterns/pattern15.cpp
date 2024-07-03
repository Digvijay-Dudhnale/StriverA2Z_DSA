// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.
// You must print a matrix corresponding to the given Reverse Letter Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// A B C
// A B
// A

#include<bits/stdc++.h>

void nLetterTriangle(int n) {
    char alpha ;
    for(int i=1 ; i<=n ; i++){
        alpha = 'A' ;
        for(int j=0 ; j<=n-i ; j++){
            cout<<alpha<<" " ;
            alpha++ ;
        }
        cout<<endl ;
    }
}