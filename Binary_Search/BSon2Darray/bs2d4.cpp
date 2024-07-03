// You are given a 0-indexed 2-D grid ‘g’ of size ‘n’ X ‘m’, where each cell contains a positive integer, and adjacent cells are distinct.
// You need to find the location of a peak element in it. If there are multiple answers, find any of them.
// A peak element is a cell with a value strictly greater than all its adjacent cells.
// Assume the grid to be surrounded by a perimeter of ‘-1s’.
// You must write an algorithm that works in O(n * log(m)) or O(m * log(n)) complexity.
// Note:
// In the output, you will see '0' or '1', where '0' means your answer is wrong, and '1' means your answer is correct.


#include<bits/stdc++.h>
using namespace std ;

vector<int> findPeakGrid(vector<vector<int>> &g){
    vector<int>ans{0,0} ;
    int rows, columns ;
    rows = g.size() ;
    columns = g[0].size() ;
    int peakElement=0 ;
    for(int i=0 ; i<rows ; i++){
        if(peakElement<g[i][0]){
            peakElement=g[i][0] ;
            ans[0]=i ;
            ans[1]=0 ;
        }
        for(int j=0 ; j<columns ; j++){
            if(peakElement<g[i][j]){
                peakElement=g[i][j] ;
                ans[0]=i ;
                ans[1]=j ;
            }
        }
    }  
    return ans ; 
}