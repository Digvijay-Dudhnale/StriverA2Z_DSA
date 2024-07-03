// Ninja has been given a task to print the required star pattern and he asked your help for the same.
// You must return an ‘N’*’N’ matrix corresponding to the given star pattern.
// Example:
// Input: ‘N’ = 4
// Output: 
// ****
// *  *
// *  *
// ****

#include<bits/stdc++.h>

void getStarPattern(int n) {
    int i, j, k, count=1 ;
    for(i=1 ; i<=n ; i++){
        if(count==1){
            for(j=1 ; j<=n ; j++){
                cout<<"*" ;
            }
            count++ ;
            cout<<endl ;
        }
        else if(count>1 && count!=n){
            for(i=1 ; i<=n-2 ; i++){
                cout<<"*" ;
                for(k=1 ; k<=n-2 ; k++){
                    cout<<" " ;
                }
                cout<<"*" ;
                count++ ;
                cout<<endl ;
            }
        }
        else{
            for(j=1 ; j<=n ; j++){
                cout<<"*" ;
            }
            cout<<endl ;
        }
    }
}
