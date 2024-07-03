// You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.
// Note:
// 'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.

#include<bits/stdc++.h>
using namespace std ;

long int calculatePower(int mid, int n, int m){
  long int ans=1 ;

  for(int i=1 ; i<=n ; i++){
    ans*=mid ;
    if(ans>m)
      return 2 ;
  }
  // cout<<ans<<endl;

  if(ans==m)
    return 1 ;

  return 0 ;
  // return ans ;

}

int NthRoot(int n, int m){
  int left,right,mid ;

  // Solution 1 
  left=1 ;
  right=m/n ;
  while(left<=right){
    mid=left+(right-left)/2 ;

    long int nthPower = calculatePower(mid,n,m) ;
    // cout<<nthPower<<endl ;
    // if(nthPower==m)
    //   return mid ;
    // else if(nthPower>m)
    //   right=mid-1 ;
    // else
    //   left=mid+1 ;

    if(nthPower==1)
      return mid ;
    else if(nthPower==2)
      right=mid-1 ;
    else
      left=mid+1 ; 
  }

  // // Solution 2 
  // double result = round(pow(m,1.0/n)) ;
  // // int ans = round(result) ;
  // if(pow(result,n)==m)
  //   return result ;
  return -1 ;
}