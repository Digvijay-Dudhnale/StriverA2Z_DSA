// A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.
// You are given a number 'n'.
// Find out whether 'n' is prime or not.

#include<bits/stdc++.h>

bool isPrime(int n)
{
	int i, rem ;
	bool ans ;
	ans = true ;
	if(n==1) // special case
		return false ;
	else{
		for(i=2 ; i<=n/2 ; i++){ // checks if the n is divisible by numbers other than 1 and n itself
			rem = n%i ;
			if(rem==0){
				ans = false ;
				break ;
			}
		}
	}

	return ans ;
}
