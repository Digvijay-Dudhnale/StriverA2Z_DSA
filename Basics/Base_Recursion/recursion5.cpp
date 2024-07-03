// You are given an integer ’n’.
// Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
// The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.
// Note:
// In the output, you will see the array returned by you.
// Example:
// Input: ‘n’ = 7
// Output: 1 2 6
// Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.

#include <bits/stdc++.h>

void factorial_n(long long n, int i, long long factorial, vector<long long> &ans){
    factorial = factorial * i ; // calculating factorial 
    if(factorial>n) // base condition
        return ;
    ans.push_back(factorial) ;
    factorial_n(n, i+1, factorial, ans) ;
}

vector<long long> factorialNumbers(long long n) {
    int i=1 ; // for calculaing factorial
    vector<long long> ans ;
    long long factorial=1 ; // for storing factorials
    factorial_n(n,i,factorial,ans) ; // calling recursive function
    return ans ;
}