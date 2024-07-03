// You are given an integer 'n'.
// Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
// Note:
// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

#include<bits/stdc++.h>

bool checkArmstrong(int n){
	int n_temp, l_digit, s, sum ;
	string str ;
	str = to_string(n); 
	n_temp =n ;
	s = str.size() ;
	sum = 0 ;
	while(n_temp>0){
		l_digit = n_temp%10 ;
		sum = sum+round(pow(l_digit,s)) ;
		n_temp=n_temp/10 ;
	}

	if(sum==n)
		return true ;
	else
		return false ;
}
