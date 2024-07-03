// Sam is curious about symmetric patterns, so he decided to create one.
// For every value of ‘N’, return the symmetry as shown in the example.
// Example:
// Input: ‘N’ = 3
// Output: 
// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *

#include<bits/stdc++.h>

void symmetry(int n) {
    int i, j, k, l, m, row=(n*2)-1 ;
    for(i=1 ; i<=row ; i++){
        if(i<=n){
            for(j=1 ; j<=i ; j++){
                cout<<"* " ;
            }
            for(k=1 ; k<=(n-i) ; k++){
                cout<<" " ;
            }
            for(l=1 ; l<=(n-i) ; l++){
                cout<<" " ;
            }
            for(m=1 ; m<=i ; m++){
                cout<<"* " ;
            }
            cout<<endl ;
        }
        else if (i>n){
            for(j=1 ; j<=(n*2)-i ; j++){
                cout<<"* " ;
            }
            for(k=1 ; k<=(i-n) ; k++){
                cout<<" " ;
            }
            for(l=1 ; l<=(i-n) ; l++){
                cout<<" " ;
            }
            for(m=1 ; m<=(n*2)-i ; m++){
                cout<<"* " ;
            }
            cout<<endl ;
        }
    }
}