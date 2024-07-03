// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// 1 2 3
// 1 2
// 1

#include<bits/stdc++.h>

void nNumberTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            cout<<j+1<<" " ;
        }
        cout<<endl ;
    }
}