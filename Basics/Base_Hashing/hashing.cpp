// Given an array 'v' of 'n' numbers.
// Your task is to find and return the highest and lowest frequency elements.
// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.
// Example:
// Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]
// Output: 1 2
// Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].

#include <bits/stdc++.h>

vector<int> getFrequencies(vector<int>& v) {
    int n, max_freq, min_freq, max_ele, min_ele;
    vector<int> ans ; 
    map<int,int> map_ans ; // declaring ordered map
    map<int,int>::iterator itr ; // declaration of iterator
    n = v.size() ;
    max_freq = 0 ;
    min_freq = n ;
    max_ele = 0 ;
    min_ele = 0 ;

    for(int i=0 ; i<n ; i++){
        map_ans[v[i]]++ ; 
    }

    // declaring iterator using basic approach
    // for(itr = map_ans.begin() ; itr!=map_ans.end() ; itr++){
    //     if(itr->second>max_freq){ 
    //         max_freq=itr->second ; // accessing value sotored for key
    //         max_ele=itr->first ; // accessing key
    //     }
    //     if(itr->second<min_freq){
    //         min_freq=itr->second ;
    //         min_ele=itr->first ;
    //     }
    // }

    // declaring iterator using auto
    for(auto itr : map_ans){
        if(itr.second>max_freq){ 
            max_freq=itr.second ; // accessing value sotored for key
            max_ele=itr.first ; // accessing key
        }
        if(itr.second<min_freq){
            min_freq=itr.second ;
            min_ele=itr.first ;
        }
    }
    ans.push_back(max_ele) ;
    ans.push_back(min_ele) ;

    return ans ;    
}