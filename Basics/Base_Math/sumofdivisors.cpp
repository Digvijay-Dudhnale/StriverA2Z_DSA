// You are given an integer ‘n’.
// Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.
// Example:
// Input: ‘n’  = 5
// Output: 21
// Explanation:
// We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
// ‘sumOfDivisors(1)’ = 1
// ‘sumOfDivisors(2)’ = 2 + 1 = 3
// ‘sumOfDivisors(3)’ = 3 + 1 = 4
// ‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
// ‘sumOfDivisors(5)’ = 5 + 1 = 6
// Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

#include<bits/stdc++.h>

int sumOfAllDivisors(int n){
	int sum, sumofall=0, i, j, rem ;
	
	// if(n==1)
	// 	return 1 ; // if number is 1 then sum of all divisors is also 1
	// else{
		for(i=1 ; i<=n ; i++){ // for numbers 1 to n and calculating sum of their divisors
			if(i==1)
				sum=1 ;
			else{
				sum=0 ; // stores sum of divisors of i
				for(j=1 ; j<=i ; j++){ // for checking divisors and calculating their sum
					rem = i%j ;
					if(rem==0){
						sum = sum+j; // calculates sum of divisors of i
					}
				}
			}
			sumofall = sumofall+sum ; // will store sum of all the divisors of numbers 1 to n
		}	
	// }
	return sumofall ;
}