// Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
// Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.
// Constraints
// 0<= 'n' <=10000
// Example :
// Input: 'n' = 132456
// Output: 12 9

#include<iostream>
using namespace std;

int main() {
	int num ,i=0 ,len ,odd=0 ,even=0 ,rem ,ed;
	cin>>num ;
	string str = to_string(num) ;
	len = str.length() ;
	
	while(i<len){
		ed = num%10 ;
		num = num/10 ;
		rem = ed%2 ;
		if( rem==0 )
			even = even+ed ;
		else
			odd = odd+ed ;

		i++ ;
	}

	cout<<even<<" "<<odd<<endl ;
	
}