// Sam is making a Triangular painting for a maths project.
// An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.
// For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.
// Example:
// Input: ‘N’ = 3
// Output: 
// 1
// 1 2 
// 1 2 3

#include<bits/stdc++.h>

void nTriangle(int n) {
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
			cout<<j+1<<" " ;
		}
		cout<<endl ;
	}
}