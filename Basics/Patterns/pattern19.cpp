// Sam is curious about symmetric patterns, so he decided to create one.
// For every value of ‘N’, return the symmetry as shown in the example.
// Example:
// Input: ‘N’ = 3
// Output: 
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

#include<bits/stdc++.h>

void symmetry(int n) {
    int i, j, k, l, m, row=n*2 ;
    for(int i=1 ; i<=row ; i++){
        if(i<=n){
            for(j=0 ; j<=n-i ; j++)
                cout<<"* ";
            for(k=1 ; k<=i-1 ; k++)
                cout<<" ";
            for(l=1 ; l<=i-1 ; l++)
                cout<<" ";
            for(m=0 ; m<=n-i ; m++)
                cout<<"* ";
            cout<<endl ;
        }
        else if(i>n){
            for(j=n ; j<i ; j++)
                cout<<"* ";
            for(k=1 ; k<=row-i ; k++)
                cout<<" ";
            for(l=1 ; l<=row-i ; l++)
                cout<<" ";
            for(m=n ; m<i ; m++)
                cout<<"* ";
            cout<<endl ;
        }
    }
}