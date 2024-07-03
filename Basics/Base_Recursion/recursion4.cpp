// You are given an integer ‘n’.
// Your task is determining the sum of the first ‘n’ natural numbers and returning it.
// Example:
// Input: ‘n’ = 3
// Output: 6

#include<bits/stdc++.h>

void sumofn(int n, long long &sum){ // recursive function
    if(n==0) // base condition
        return;
    sum = sum+n ; // starts adding from n to 1 
    sumofn(n-1,sum) ; // recursive call
    // sum=sum+n ; // starts adding from 1 to n 
}

long long sumFirstN(long long n) {
    long long sum=0 ;
    sumofn(n,sum) ; // calling recursive function
    return sum ;
}