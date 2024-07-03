// You are given a string 'str' of length 'N'.
// Your task is to reverse the original string word by word.
// There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.
// Example :
// If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.

#include<bits/stdc++.h>
using namespace std ;

string reverseString(string &str){
	string word="" ; // store each word
    string revStr="" ; // store reversed string
    vector<string> s ; // store all words
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]!=' '){ // str[i] returns character
            word+=str[i] ;
        }
        else{
            if(word.size()!=0){
                s.push_back(word) ;
                word="" ;
            }
        }

        if(i==str.size()-1 && word.size()!=0){ // add last word of string
            s.push_back(word) ;
        }
    }

    for(int i=s.size()-1 ; i>=0 ; i--){ // storing words in reverse order
        if(i==0){ // for space
            revStr+=s[i] ; 
        }
        else{
            revStr+=s[i]+" " ;
        }
    }

    return revStr ;
}