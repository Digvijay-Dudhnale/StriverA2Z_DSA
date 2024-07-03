// Given an integer ‘n’, return first n Fibonacci numbers using a generator function.
// Example:
// Input: ‘n’ = 5
// Output: 0 1 1 2 3
// Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.

#include<bits/stdc++.h>

void fibnumbers(int n, int &fib_num, vector<int> &ans){
    if(n==2){ // n==1 
        ans.push_back(0) ;
        ans.push_back(1) ;
        return;
    }
    
    fibnumbers(n-1, fib_num, ans) ;
    
    fib_num = fib_num + ans[n-3] ; // for n=2 it is -1 negative indexing means last element
    ans.push_back(fib_num) ; // call by reference is important for fib_num
}

vector<int> generateFibonacciNumbers(int n) {
    int fib_num = 1 ; 
    vector <int> ans ; // storing  n fibonacci numbers 
    if(n==1)
        ans.push_back(0) ;
    else
        fibnumbers(n,fib_num,ans) ; // calling recursive function
    return ans ;
}