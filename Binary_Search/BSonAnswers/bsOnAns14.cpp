// You're given two sorted arrays 'arr1' and 'arr2' of size 'n' and 'm' respectively and an element 'k'.
// Find the element that would be at the 'kth' position of the combined sorted array.
// Position 'k' is given according to 1 - based indexing, but arrays 'arr1' and 'arr2' are using 0 - based indexing.
// For example :
// Input: 'arr1' = [2, 3, 45], 'arr2' = [4, 6, 7, 8] and 'k' = 4
// Output: 6
// Explanation: The merged array will be [2, 3, 4, 6, 7, 8, 45]. The element at position '4' of this array is 6. Hence we return 6.

// Constraints :
// 1 <= 'n' <= 5000
// 1 <= 'm' <= 5000
// 0 <= 'arr1[i]', 'arr2[i]' <= 10^9
// 1 <= 'k' <= 'n' + 'm'
// 'n' and 'm' denote the size of 'arr1' and 'arr2'.
// Time limit: 1 second
// Expected time complexity :
// The expected time complexity is O(log('n') + log('m')). 

#include <bits/stdc++.h>
using namespace std ;

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // My Solution 
	// int arr1Size, arr2Size, cSize, j, l ;
	// arr1Size=arr1.size() ;
	// arr2Size=arr2.size() ;
	// cSize=arr1Size+arr2Size ;
	// j=0 ;
	// l=0 ;
	
    // for(int i=1 ; i<=cSize ;){
    //     if(j<arr1Size && l<arr2Size){
    //         if(arr1[j]<arr2[l]){
    //             if(i==k){
    //                 return arr1[j] ;
    //             }
    //             j++ ;
    //             i++ ;
    //         }
    //         else if(arr1[j]==arr2[l]){
    //             if(i==k || i==(k-1)){
    //                 return arr1[j] ;
    //             }
    //             i+=2 ;
    //             j++ ;
    //             l++ ;
    //         }
    //         else{
    //             if(i==k){
    //                 return arr2[l] ;
    //             }
    //             l++ ;
    //             i++ ;
    //         }
    //     }
    //     else if(j<arr1Size){
    //         if(i==k){
    //             return arr1[j] ;
    //         }
    //         i++ ;
    //         j++ ;
    //     }
    //     else{
    //         if(i==k){
    //             return arr2[l] ;
    //         }
    //         i++;
    //         l++;
    //     }
    // }

    // Better approach
    int n1= n;
    int n2= m;
    if(n1>n2) 
        return kthElement(arr2, arr1, n2, n1, k);
    int low= max(k-n2, 0); 
    int high= min(k, n1);
    int left= k;
    n= n1+n2;
    
    while(low<=high){
        int mid1= (low+high) >> 1;
        // (low+high)/2 ;
        int mid2= left-mid1;
        
        int l1= INT_MIN;
        int l2= INT_MIN;
        int r1= INT_MAX;
        int r2= INT_MAX;

        if(mid1< n1) 
            r1= arr1[mid1];
        if(mid2< n2) 
            r2= arr2[mid2];
        if(mid1-1>=0) 
            l1= arr1[mid1-1];
        if(mid2-1>=0) 
            l2= arr2[mid2-1];
            
        if(l1<= r2 && l2<= r1){
            return max(l1,l2);
        }
        else if(l1> r2) 
            high= mid1-1;
        else low= mid1+1;
    }
    return 0;
}