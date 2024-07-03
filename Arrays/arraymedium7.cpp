// You are given an array ‘a’ of ‘n’ integers.
// You have to return the lexicographically next to greater permutation.
// Note:
// If such a sequence is impossible, it must be rearranged in the lowest possible order.
// Example:
// Input: 'a' = [1, 3, 2]
// Output: 2 1 3
// Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [1, 3, 2] is [2, 1, 3].

#include<bits/stdc++.h>

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n ;
    n=A.size() ;
    // vector<int> duplicate ;

    // // create copy of array A
    // for(int i=0 ; i<n ; i++){
    //     duplicate.push_back(A[i]) ;
    // }

    // // Bubble Sort , sort copy
    // int temp ;
    // for(int i=0 ; i<n-1 ; i++){
    //     for(int j=0 ; j<n-(i+1) ; j++){
    //         if(duplicate[j]>duplicate[j+1]){
    //             temp = duplicate[j] ;
    //             duplicate[j] = duplicate[j+1] ;
    //             duplicate[j+1] = temp ;
    //         }
    //     }
    // }

    // // The next element greater than A[0]
    // int j=0 ;
    // for(j ; j<n-1 ; j++){
    //     if(duplicate[j]>A[0])
    //         break ;
    // }
    // // copy the greater element at A[0]
    // temp = A[0] ;
    // A[0] = duplicate[j] ;
    // for(int i=1 ; i<n ; i++){ // copy all remaining elements in increasing order
    //     if((i-1)==j)
    //         continue;
    //     A[i] = duplicate[i-1] ;
    // }

    next_permutation(A.begin(),A.end()) ;
    
    return A ;
}