// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.
// You are required to print the pattern as shown in the examples below.
// Example:
// Input: ‘N’ = 3
// Output: 
// 1
// 0 1
// 1 0 1

#include<bits/stdc++.h>

void nBinaryTriangle(int n) {
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<i ; j++){
            cout<<(i+j)%2<<" " ;
        }
        cout<<endl ;
    }
}