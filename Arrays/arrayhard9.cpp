// You are given an array of ‘N’ integers where each integer value is between ‘1’ and ‘N’.
// Each integer appears exactly once except for ‘P’, which appears exactly twice, and ‘Q’, which is missing.
// Your task is to find ‘P’ and ‘Q’ and return them respectively.
// Example:
// Input: ‘N’ = 4
// ‘A’ = [1, 2, 3, 2]
// Output: {2, 4}

#include<bits/stdc++.h>

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // My Solution
    // vector<int> ans ;
    // int missing , twice ;
    // int n=a.size() ;
    // map<int,int> mp ;
    // for(int i=0 ; i<n ; i++){
    //     mp[i+1]=0 ;
    // }
    // for(int i=0 ; i<n ; i++){
    //     mp[a[i]]++ ;
    // }
    // map<int,int> :: iterator itr ;
    // for(itr=mp.begin();itr!=mp.end();itr++){
    //     if(itr->second==0)
    //         missing = itr->first ;
    //         // ans.push_back(itr->second);
    //     else if(itr->second==2)
    //         twice = itr->first ;
    //         // ans.push_back(itr->second);
    // }
    // ans.push_back(twice) ;
    // ans.push_back(missing) ;
    // return ans ;

    // Seen Solution 
    int n ;
    n=a.size() ;
    int arr[n+1] = {} ;
    int missing, twice ;
    for(int i=0 ; i<n ; i++){
        arr[a[i]]++ ;
    }

    for(int i=1 ; i<=n ; i++){
        if(arr[i]==2)
            twice=i ;
        else if(arr[i]==0)
            missing=i ;
    }

    return{twice,missing} ;
}