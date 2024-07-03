// You are given a 2D matrix ‘MATRIX’ of ‘N’*’M’ dimension. You must check whether a given number ‘target’ is present in the matrix.
// The following properties apply to the given matrix:
// 1. In each row, integers are sorted from left to right.
// 2. Each row's first integer is greater than the previous row's last integer.
// Example:
// Input:
// 'MATRIX' = [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60] ], 'TARGET' = 3 
// Output:1
// Explanation: Since the given number ‘TARGET’ is present in the matrix, we return true.


#include<bits/stdc++.h>
using namespace std ;

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    for(int i=0 ; i<MATRIX.size() ; i++){
        // for(int j=0 ; j<mat[0].size() ; j++){
        //     if(mat[i][j]==target)
        //         return true ;
        // }
        int low=0 ;
        int high=MATRIX[0].size()-1 ;
        int mid ;
        while(low<=high){
            mid=low+(high-low)/2 ;
            if(MATRIX[i][mid]==target)
                return true ;
            else if(MATRIX[i][mid]>target)
                high=mid-1 ;
            else
                low=mid+1 ;
        }
    }
    return false ;
}