// You are given a string 'S' of length 'N' representing an integer.
// A string is a valid parenthesis if it satisfies one of the following conditions:
// If the string is empty or consists of a character other than ‘(‘ and ')'.
// If the string can be represented as a concatenation of two strings such that both strings are valid parentheses strings.
// If the string can be represented as '(A)', where A is a valid parenthesis.
// Depth of a string is defined as follows:
// depth( '' )=0
// depth( A )=0, where ‘A’ is an empty string or consists of a character other than ‘(‘ and ‘)’.
// depth( A+B )=max(depth( A ), depth( B )), such that ‘A’ and ‘B’ are both strings are valid parentheses strings.
// depth( (A) ) = 1+depth(A), where ‘A’ is a valid parentheses string.
// Given a valid parentheses string ‘S’, you must return the nesting depth of the string ‘S’.

#include<bits/stdc++.h>
using namespace std ;

int maxDepth(string s) {
    int size = s.size() ;
    int countOpen=0 ;
    // int countClose=0 ;
    int valid=0 ;
    // int tempValid=0 ;
	for(int i=0 ; i<size ; i++){
        if(s[i]=='('){
            countOpen++ ;
            // if(valid<tempValid){
            //     valid=tempValid ;
            //     tempValid=0 ;
            // }
            if(valid < countOpen)
                valid=countOpen ;
        }
        else if(s[i]==')' && countOpen!=0){
            // tempValid++ ;
            countOpen-- ;
        }
        
    }
    // if(tempValid>valid){
    //     return tempValid ;
    // }
    return valid ;
}
