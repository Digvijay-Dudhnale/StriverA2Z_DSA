// You are given an integer ‘n’.
// Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.
// Example:
// Input: ‘n’ = 5
// Output: 1 2 3 4 5

#include<bits/stdc++.h>

void print(int x,vector<int>&ans){ // recursive function
    if(x==1){ // base condition
        ans.push_back(x) ;
        return ;
    }
    print(x-1,ans) ; // recursive call
    ans.push_back(x) ;
}

vector<int> printNos(int x) {
    vector<int> ans ;
    print(x,ans) ; // calling recursive functions
    return ans ;
}