// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.
// Note:
// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
// Example:
// Input: ‘n’ = 336
// Output: 3
// Explanation:
// 336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
// Note:
// You don’t need to print anything. Just implement the given function.

#include<bits/stdc++.h>

int countDigits(int n){
	int digit, count=0, size, temp, rem ; // i=1
	temp = n ;
	// string str ;
	// str = to_string(n) ;
	// size = str.size() ;	
	// while(i<=size)
	while(n!=0){ 
		digit = n%10 ;
		if(digit!=0){
			rem = temp%digit ;
			if(rem==0){
				count++ ;
			}
		}
		// i++ ;
		n = n/10 ;
	}
	return count;
}