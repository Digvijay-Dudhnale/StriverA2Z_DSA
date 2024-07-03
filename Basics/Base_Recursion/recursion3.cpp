// You are given an integer ‘n’.
// Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.
// Note:
// In the output, you will see the array returned by you.
// Example:
// Input: ‘n’ = 5
// Output: 5 4 3 2 1

#include<bits/stdc++.h>

void print_xto1(int n, int x, vector<int> &ans) { // recursive function

    // using vector
    if(n==1){ // base condition
        ans.push_back(x-n+1) ;
        return ;
    }
    print_xto1(n-1, x, ans) ; // recursive call
    ans.push_back(x-n+1) ;

    // without using n 
    // if(x==0){ // base condition
    //     return ;
    // }
    // ans.push_back(x) ;
    // print_xto1(int x, int &ans) ; // declaration of function
    // print_xto1(x-1,ans) // recursive call
}

vector<int> printNos(int x) {
    // // using array difficult
    // int ans[x] ;
    // print_xto1(x,ans) ;
    // return ans ;



    // using vector 
    int n ;
    n=x ; // to call recursive function x times
    vector<int> ans ;
    print_xto1(n, x, ans) ; // calling recursive function
    return ans ;
}