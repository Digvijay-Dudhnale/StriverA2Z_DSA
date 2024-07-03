// You are given a 2D matrix ‘MATRIX’ of ‘N’*’M’ dimension. You have to return the spiral traversal of the matrix.
// Example:
// Input:
// MATRIX = [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60] ]
// Output:
// 1 3 5 7 20 60 34 30 23 10 11 16

#include<bits/stdc++.h>

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int n, m, left, right, top, bottom,i ;
    vector<int> ans ;
    n=MATRIX.size() ;
    m=MATRIX[0].size() ;
    left=0;
    right=m-1;
    top=0;
    bottom=n-1;

    while(left<=right && top<=bottom){
        for(i=left;i<=right;i++){
            ans.push_back(MATRIX[top][i]) ;
        }
        top++ ;

        for(i=top;i<=bottom;i++){
            ans.push_back(MATRIX[i][right]) ;
        }
        right-- ;
        if(top<=bottom){
            for(i=right;i>=left;i--){
                ans.push_back(MATRIX[bottom][i]) ;
            }
            bottom-- ;
        }
        if(left<=right){
            for(i=bottom;i>=top;i--){
                ans.push_back(MATRIX[i][left]) ;
            }
            left++ ;
        }
    }

    return ans ;
}