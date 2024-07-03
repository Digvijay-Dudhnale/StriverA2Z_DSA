// Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.
// An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.
// For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// C
// C B 
// C B A

#include<bits/stdc++.h>

void alphaTriangle(int n) {
    char alpha ;
    for(int i=1 ; i<=n ; i++){
        alpha='A'+(n-1) ;
        for(int j=1 ; j<=i ; j++){
            cout<<alpha<<" " ;
            alpha-- ;
        }
        cout<<endl ;
    }
}