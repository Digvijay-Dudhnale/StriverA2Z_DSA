// You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.
// Example:
// Input:
// N = 4
// Output: // in pascal's triangle the element is sum of two exactly elements above it
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// Explanation: The output matrix has the first four rows of Pascal’s Triangle. 

#include<bits/stdc++.h>

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans(N) ;
    int num ;
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<=i ; j++){
            if(j==0)
                ans[i].push_back(1) ;
            else if(j==i)
                ans[i].push_back(1) ;
            else{
                num = ans[i-1][j-1] + ans[i-1][j] ;
                ans[i].push_back(num) ;
            }
        }
    }
    return ans ;

    // another way
    // for(int i=0 ; i<N ; i++){
    //     ans[i].resize(i+1) ;
        
    //     ans[i][0] = 1 ;
    //     ans[i][i] = 1 ;

    //     for(int j=1 ; j<i ; j++){
    //         ans[i][j] = ans[i-1][j-1] + ans[i-1][j] ;
    //     }
    // }
}