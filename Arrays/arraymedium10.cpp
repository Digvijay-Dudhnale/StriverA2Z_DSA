// You are given a matrix 'MATRIX' of dimension 'N' x 'M'. Your task is to make all the elements of row 'i' and column 'j' equal to 0 if any element in the ith row or jth column of the matrix is 0.
// Note:
// 1) The number of rows should be at least 1.
// 2) The number of columns should be at least 1.

#include <bits/stdc++.h> 

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int i, j ;
	set<int> row ; // set has unique values
	set<int> col ;
	set<int> :: iterator itr ;
	for( i=0 ; i<n ; i++){
		for( j=0 ; j<m ; j++){
			if(matrix[i][j]==0){
				row.insert(i) ;
				col.insert(j) ;
			}
		}	
	}

	for(itr=row.begin() ; itr!=row.end() ; itr++){ // makes row 0
		for(j=0 ; j<m ; j++){ 
			matrix[*itr][j] = 0 ;
		}
	}
	for(itr=col.begin() ; itr!=col.end() ; itr++){ // makes column 0
		for(j=0 ; j<n ; j++){
			matrix[j][*itr] = 0 ;
		}
	}
	return matrix ;
}