// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// A
// A B
// A B C

#include<bits/std++.h>

void nLetterTriangle(int n) {
    char alpha ;
    for(int i=1 ; i<=n ; i++){
        alpha = 'A' ;
        for(int j=1 ; j<=i ; j++){
            cout<<alpha<<" ";
            alpha++ ;
        }
        cout<<endl ;
    }
}