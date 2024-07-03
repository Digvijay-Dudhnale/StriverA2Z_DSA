// Given two sorted arrays 'a' and 'b' of size 'n' and 'm' respectively.
// Find the median of the two sorted arrays.
// Median is defined as the middle value of a sorted list of numbers. In case the length of list is even, median is the average of the two middle elements.
// The expected time complexity is O(min(logn, logm)), where 'n' and 'm' are the sizes of arrays 'a' and 'b', respectively, and the expected space complexity is O(1).


#include<bits/stdc++.h>
using namespace std ;

double median(vector<int>& a, vector<int>& b) {
	// My Solution 
	// int aSize ,bSize ,cSize ,j ,k ;
	// aSize=a.size() ;
	// bSize=b.size() ;
	// vector<int> ans ;
	// cSize=aSize+bSize ;
	// j=0 ;
	// k=0 ;
	
	// if(cSize%2 != 0){
	// 	for( int i=0 ; i<=cSize/2 ;){
	// 		if(j<aSize && k<bSize){
	// 			if(a[j]<b[k]){
	// 				if(i==(cSize/2)){
	// 					ans.push_back(a[j]) ;
	// 				}
	// 				j++ ;
	// 				i++ ;
	// 			}
	// 			else if(a[j]>b[k]){
	// 				if(i==(cSize/2)){
	// 					ans.push_back(b[k]) ;
	// 				}
	// 				k++ ;
	// 				i++ ;
	// 			}
	// 			else{
	// 				if(i==(cSize/2) || i==(cSize/2)-1){
	// 					ans.push_back(b[k]) ;
	// 				}
	// 				j++ ;
	// 				k++ ;
	// 				i+=2 ;
	// 			}
	// 		}
	// 		else if(j<aSize){
	// 			if(i==(cSize/2)){
	// 					ans.push_back(a[j]) ;
	// 				}
	// 			j++ ;
	// 			i++ ;
	// 		}
	// 		else{
	// 			if(i==(cSize/2)){
	// 					ans.push_back(b[k]) ;
	// 				}
	// 			k++ ;
	// 			i++ ;
	// 		}
	// 	}
	// }
	// else{
	// 	for(int i=0 ; i<=cSize/2 ;){
	// 		if(j<aSize && k<bSize){
	// 			if(a[j]<b[k]){
	// 				if(i== (cSize/2) || i== (cSize/2)-1){
	// 					ans.push_back(a[j]) ;
	// 				}
	// 				j++ ;
	// 				i++ ;
	// 			}
	// 			else if(a[j]>b[k]){
	// 				if(i== (cSize/2) || i== (cSize/2)-1){
	// 					ans.push_back(b[k]) ;
	// 				}
	// 				k++ ;
	// 				i++ ;
	// 			}
	// 			else{
	// 				if(i==(cSize/2)-2){
	// 					ans.push_back(a[j]) ;
	// 				}
	// 				else if(i==(cSize/2)-1){
	// 					ans.push_back(a[j]) ;
	// 					ans.push_back(b[k]) ;
	// 				}
	// 				else if(i == (cSize/2) && ans.size()==1){
	// 					ans.push_back(a[j]) ;
	// 					// ans.push_back(b[k]) ;
	// 				}
	// 				else if(i==(cSize/2)){
	// 					ans.push_back(a[j]) ;
	// 					ans.push_back(b[k]) ;
	// 				}
	// 				j++ ;
	// 				k++ ;
	// 				i+=2 ;
	// 			}
	// 		}
	// 		else if(j<aSize){
	// 			if(i== (cSize/2) || i== (cSize/2)-1){
	// 					ans.push_back(a[j]) ;
	// 				}
	// 			j++ ;
	// 			i++ ;
	// 		}
	// 		else{
	// 			if(i== (cSize/2) || i== (cSize/2)-1){
	// 					ans.push_back(b[k]) ;
	// 				}
	// 			k++ ;
	// 			i++ ;
	// 		}
	// 	}
	// }
	
	// return (double)(accumulate(ans.begin(),ans.end(),0)/(double)ans.size()) ;


	// Solution 2
	// int n=a.size();
	// int m=b.size();
	// int i = 0, j = 0, m1 = 0, m2 = 0;
	// // Find median.
	// for (int count = 0; count <= (n + m) / 2; count++) {
	// 	m2 = m1;
	// 	if (i != n && j != m) {
	// 		if (a[i] >b[j]) {
	// 			m1 = b[j++];
	// 		} else {
	// 			m1 = a[i++];
	// 		}
	// 	} else if (i < n) {
	// 		m1 = a[i++];
	// 	} else {
	// 		m1 = b[j++];
	// 	}
	// }
	// // Check if the sum of n and m is odd.
	// if ((n + m) % 2 == 1) {
	// 	return (double)(m1);
	// } else {
	// 	double ans = (double)(m1) + (double)(m2);
	// 	return ans / 2.0;
	// }

	// Optimal Solution
	int n1=a.size();
    int n2=b.size();

    if(n1>n2) 
		median(b,a);

    int low=0,high=n1;
    int left=(n1+n2+1)/2;

    while(low<=high)
    {
        int mid1=low+(high-low)/2;
        int mid2=left-mid1;
        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;

        if(mid1-1 >=0)  
			l1=a[mid1-1];
        if(mid2-1 >=0) 
			l2=b[mid2-1];
        if(mid1<n1) 
			r1=a[mid1];
        if (mid2<n2) 
			r2=b[mid2];

        if(l1<=r2 && l2<=r1){

            if((n1+n2)%2==1) 
				return max(l1,l2);
            else{
                return (max(l1,l2) + min(r1,r2))/2.0;
            }
        }
        else if(l1>r2){
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }
    return 0;
}