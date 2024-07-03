// You are given a 2D matrix 'ARR' (containing either ‘0’ or ‘1’) of size 'N' x 'M', where each row is in sorted order.
// Find the 0-based index of the first row with the maximum number of 1's.
// Note :
// If two rows have the same number of 1’s, return the row with a lower index.
// If no row exists where at-least one '1' is present, return -1.


#include<bits/stdc++.h>
using namespace std ;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int rowIndex=-1 ;
    int oneIndex=m ;
    int numOfOne=0 ;
    int low,high,mid ;
    for(int i=0 ; i<n ; i++){
        // for(int j=0 ; j<m ; j++){
        //     if(matrix[i][j]==1){
        //         if(rowIndex<i && numOfOne<(m-j)){
        //             rowIndex=i ;
        //             numOfOne=(m-j) ;
        //         }
        //     }
        // }
        low=0; 
        high=m-1 ;
        while(low<=high){
            mid=low+(high-low)/2 ;

            if(matrix[i][mid]>0){
                high=mid-1 ;
                oneIndex=mid ;
                
            } 
            else{
                low=mid+1 ;
            }
        }
        if(i>rowIndex && numOfOne<(m-oneIndex)){
            // cout<<oneIndex ;
            rowIndex=i ;
            numOfOne=(m-oneIndex) ;
        }
        
    }
    // cout<<numOfOne ;
    return rowIndex ;
    // return 0 ;
}