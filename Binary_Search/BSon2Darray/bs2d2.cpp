// You have been given a 2-D array 'mat' of size 'M x N' where 'M' and 'N' denote the number of rows and columns, respectively. 
// The elements of each row are sorted in non-decreasing order.
// Moreover, the first element of a row is greater than the last element of the previous row (if it exists).
// You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

#include<bits/stdc++.h>
using namespace std ;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    for(int i=0 ; i<mat.size() ; i++){
        // for(int j=0 ; j<mat[0].size() ; j++){
        //     if(mat[i][j]==target)
        //         return true ;
        // }
        int low=0 ;
        int high=mat[0].size()-1 ;
        int mid ;
        while(low<=high){
            mid=low+(high-low)/2 ;
            if(mat[i][mid]==target)
                return true ;
            else if(mat[i][mid]>target)
                high=mid-1 ;
            else
                low=mid+1 ;
        }
    }
    return false ;
}