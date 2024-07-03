// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.
// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.
// Example:
// Input: ‘n’ = 5 ‘m’ = 3
// ‘a’ = [1, 2, 3, 4, 6]
// ‘b’ = [2, 3, 5]
// Output: [1, 2, 3, 4, 5, 6]
// Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
// Distinct elements in ‘a’ are: [1, 4, 6]
// Distinct elements in ‘b’ are: [5]
// Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]

#include <bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n, m, i, j, k, l ;
    vector <int> ans ;
    n=a.size() ; // elements in array a 
    m=b.size() ; // elements in array b
    i=0 ; // iterating array a
    j=0 ; // iterating array b
    l=0 ; // keep track of elements added in ans
    for(k=0;k<(m+n);k++){
        // for 0th index in ans
        if(l==0){ 
            if(a[i]==b[j]){
                ans.push_back(a[i]) ;
                i++ ;
                j++ ;
                k++ ; // reducing the size of ans according to duplicates
            }
            else if(a[i]<b[j]){
                ans.push_back(a[i]) ;
                i++ ;
            }
            else{
                ans.push_back(b[j]) ;
                j++ ;
            }
            l++ ;
        }
        // for indexes greater than 0 in ans
        else{
            // if both the arrays are in limit
            if(i<n && j<m){ 
                if(a[i]==b[j]){
                    if(ans[l-1]!=a[i]){
                        ans.push_back(a[i]) ;
                        l++ ; 
                    }
                    i++ ;
                    j++ ;
                    k++ ; // reducing the size of ans according to duplicates
                }
                else if(a[i]<b[j]){
                    if(ans[l-1]!=a[i]){
                        ans.push_back(a[i]) ;
                        l++ ;
                    }
                    i++ ;
                }
                else{
                    if(ans[l-1]!=b[j]){
                        ans.push_back(b[j]) ;
                        l++ ;
                    }
                    j++ ;
                }
            }
            // if array a's limit exceeded
            else if(i>=n && j<m){
                if(ans[l-1]!=b[j]){
                    ans.push_back(b[j]) ;
                    l++ ;
                }
                j++ ;
            }
            // if array b's limit exceeded
            else{
                if(ans[l-1]!=a[i]){
                    ans.push_back(a[i]) ;
                    l++ ;
                }
                i++ ;
            }
        }
    }
    return ans ;
}