// You are given a row-wise sorted matrix 'mat' of size m x n where 'm' and 'n' are the numbers of rows and columns of the matrix, respectively.
// Your task is to find and return the median of the matrix.
// Note:
// 'm' and 'n' will always be odd.


#include<bits/stdc++.h>
using namespace std ;

int median(vector<vector<int>> &matrix, int m, int n) {
    vector<int> ans ;
    
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            ans.push_back(matrix[i][j]) ;
        }
    }

    sort(ans.begin(),ans.end()) ;

    return ans[(m*n)/2] ;
}