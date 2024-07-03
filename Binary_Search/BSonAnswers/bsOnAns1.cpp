// You are given a positive integer ‘n’.
// Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
// Example:
// Input: ‘n’ = 7
// Output: 2

#include<bits/stdc++.h>
using namespace std ;

int floorSqrt(int n)
{
    long int ans ;
    long int left, right, mid ;
    left=0 ;
    right=n/2 ;
    
    if(n==1)
        return 1 ;

    while(left<=right){
        mid=left+(right-left)/2 ;

        if(mid*mid==n)
            return mid ;
        else if (mid * mid < n){
            left=mid+1;
            ans = mid ;
            // if(left*left<n)
            //     ans = left ;
        } 
        else{
            right=mid-1 ;
            // if(right*right<n)
            //     ans=right ;
        }
    }
    return ans ;

    // for(int i=0 ; i<=n/2 ; i++){
    //     if((i*i)<n && ((i+1)*(i+1))>n)
    //         return i ;
    //     else if(i*i==n)
    //         return i ;
    // }




}
