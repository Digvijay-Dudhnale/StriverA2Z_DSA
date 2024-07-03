// Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.
// Note: You are not required to print anything, just implement the function. Example:
// Input: s = "racecar"
// Output: true
// Explanation: "racecar" is a palindrome.

#include<bits/stdc++.h>

void rev_string(int s, string str, vector<char> &ans){
    if(s==0) // base condition
        return;
    ans.push_back(str[s-1]) ; // stores original string in reverse manner
    rev_string(s-1, str, ans) ; // recursive calling
}

bool isPalindrome(string& str) {
    vector<char> ans ; // storing reverse of original string
    int s ;
    s = str.size() ; // size of string 
    rev_string(s, str, ans) ; // calling recursive function
    for(int i=0 ; i<s ; i++){
        if(str[i]!=ans[i])
            return false;
    }
    
    return true ;
}