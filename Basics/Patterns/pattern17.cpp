// Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.
// An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.
// For every value of ‘N’, help sam to return the corresponding Alpha-Hill.
// Example:
// Input: ‘N’ = 3
// Output: 
//     A
//   A B A
// A B C B A

#include<bits/stdc++.h>

void alphaHill(int n) {
    char alpha ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" " ;
        }
        alpha='A' ;
        for(int k=1 ; k<=i ; k++){
            cout<<alpha<<" " ;
            alpha++ ;
        }
        alpha-=2 ;      
        for(int l=1 ; l<=i-1 ; l++){
            cout<<alpha<<" " ;
            alpha-- ;
        }
        cout<<endl ;

    }
}