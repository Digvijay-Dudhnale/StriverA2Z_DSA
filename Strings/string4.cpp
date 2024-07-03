// You have been given two strings, 'str1' and 'str2'.
// Your task is to return true if the given two strings are isomorphic to each other, else return false.
// Note :
// Two strings are isomorphic if a one-to-one mapping is possible for every character of the first string ‘str1’ to every character of the second string ‘str2’ while preserving the order of the characters.
// All occurrences of every character in the first string ‘str1’ should map to the same character in the second string, ‘str2’.


#include<bits/stdc++.h>
using namespace std ;

bool areIsomorphic(string &str1, string &str2)
{
    // multimap<char,char> mmp ;
    map<char,char> mp1 ; // for storing characters of str2 corresponding to those of str1
    map<char,char> mp2 ; // for storing characters of str1 corresponding to those of str2

    if(str1.size()!=str2.size()) 
        return false ;

    for(int i=0 ; i<str1.size() ; i++){
        // mmp[str1[i]] = str2[i] ;
        mp1[str1[i]] = str2[i] ; // storing characters of str2 corresponding to those of str1
        mp2[str2[i]] = str1[i] ; // storing characters of str1 corresponding to those of str2
    }
    // char preChar1, preChar2 ; 
    // multimap<char,char> :: iterator itr ;
    // for(itr=mp.begin() ; i<mp.end()-1 ; itr++){
    //     preChar1=itr->first ;
    //     preChar2=itr->second ;

    //     itr++ ;
    //     if(preChar1==itr->first && preChar2==itr->second)
            

    // }
    for(int i=0 ; i<str1.size(); i++ ){
        if(mp1[str1[i]] != str2[i]) // str2 contains different characters corresponding to the same character in str1
            return false ;
        
        if(mp2[str2[i]] != str1[i]) // str1 contains different characters corresponding to the same character in str2
            return false ;
    }
    return true ;
}