// You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Print the maximum possible minimum distance

#include<bits/stdc++.h>
using namespace std ;

bool minimumDistance(vector<int> stalls, int k, int mid){

    int cowCount=1 ;
    int position=stalls[0] ;
    for(int i=0 ; i<stalls.size() ; i++){
        if(stalls[i]-position >= mid){
            cowCount++ ;
            position = stalls[i] ;
        }
    } 

    if(cowCount>=k)
        return true ;
    else
        return false ;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end()) ;
    int n=stalls.size() ;
    int low=0 ;
    int high=stalls[n-1]-stalls[0] ;
    int ans=-1,mid ; 

    while(low<=high){
        mid=low+(high-low)/2 ;

        bool isPossible = minimumDistance(stalls, k, mid) ;
        
        if(isPossible){
            ans = mid ;
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
    }
    return ans ;
}