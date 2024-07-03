// You are given an integer ‘n’.
// Print “Coding Ninjas ” ‘n’ times, without using a loop.

#include<bits/stdc++.h>

void print_n(int n , vector<string> &ans){ // recursive function 
	if(n==0){ // base condition
		return ;
	}
	print_n(n-1, ans) ; // recursive call
	ans.push_back("Coding Ninjas ") ;
}

vector<string> printNTimes(int n) {
	vector<string> ans ;
	print_n(n,ans) ; // calling recursive function
	return ans ;
}