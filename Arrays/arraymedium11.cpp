// You are given a square matrix ‘Mat’ of size ‘N’. You need to rotate ‘Mat’ by 90 degrees in the clockwise direction.
// Note:
// You must rotate the matrix in place, i.e., you must modify the given matrix itself. You must not allocate another square matrix for rotation.
// For example
// When,
// ‘N’ = 2 and ‘Mat’ = {{1, 2}, {3, 4}}, we must modify ‘Mat’ to {{3, 1}, {4, 2}}.

#include<bits/stdc++.h>

#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// // Solution 1
	// int n = mat[0].size() ;
	// // cout<< n ;
	// int i,temp,l,j ;
	// // Taking transpose of array
	// for(i=0 ; i<n ; i++){
	// 	for(j=i ; j<n ; j++){
	// 		temp = mat[i][j] ;
	// 		mat[i][j] = mat[j][i] ;
	// 		mat[j][i] = temp ;
	// 	}
	// }
	
	// // Reversing array
	// i=0 ;
	// while(i<n){
	// 	j=0 ; 
	// 	l=n-1 ;
	// 	while(j<=l){
	// 		temp = mat[i][j] ;
	// 		mat[i][j] = mat[i][l] ;
	// 		mat[i][l] = temp ;
	// 		l-- ;
	// 		j++ ;
	// 	}
	// 	i++ ;
	// }

	// Solution 2 // Solution 3 swapping 3-times
	int temp1, temp2, start, end, n, i ;
	n = mat[0].size() ;
	start = 0 ;
	end = n-1 ;

	while(start<end){
		for(i=start ; i<end ; i++){
			temp1=mat[i][end] ;
			mat[i][end]=mat[start][i] ; //1st

			temp2=mat[end][end-i+start] ;
			mat[end][end-i+start]=temp1 ; //2nd

			temp1=mat[end-i+start][start] ;
			mat[end-i+start][start]=temp2 ; //3rd

			mat[start][i]=temp1 ; //4th
		}
		start++ ;
		end-- ;
	}
}