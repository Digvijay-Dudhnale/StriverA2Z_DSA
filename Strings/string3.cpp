// You are given an array ‘arr’ of ‘n’ strings.
// Find the longest common prefix in all these strings.
// If there is no common prefix in all the strings return "-1".

#include<bits/stdc++.h>
using namespace std ;

string commonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    int prefixSize = arr[0].size() ; // at start we assume all are same
    string prefix=arr[0] ; // first element is prefix
    string tempPrefix="" ; // to store prefix

    for(int i=1 ; i<n ; i++){

        for(int j=0 ; j<prefixSize ; j++){
            if(prefix[j]!=arr[i][j]){
                prefix=tempPrefix ; // updating prefix
                prefixSize=prefix.size() ; // update prefixSize
                tempPrefix = "" ; // update tempprefix
            }
            else{
                tempPrefix+=prefix[j] ; // if same character sotre in tepmPrefix
            }
        }

    }
    if(prefix.size()!=0)
        return prefix ;
    return "-1" ;
}