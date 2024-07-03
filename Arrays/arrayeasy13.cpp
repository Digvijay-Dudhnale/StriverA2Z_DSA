// Ninja and his friend are playing a game of subarrays. They have an array ‘NUMS’ of length ‘N’. Ninja’s friend gives him an arbitrary integer ‘K’ and asks him to find the length of the longest subarray in which the sum of elements is equal to ‘K’.
// Ninjas asks for your help to win this game. Find the length of the longest subarray in which the sum of elements is equal to ‘K’.
// If there is no subarray whose sum is ‘K’ then you should return 0.
// Example:
// Input: ‘N’ = 5,  ‘K’ = 4, ‘NUMS’ = [ 1, 2, 1, 0, 1 ]
// Output: 4
// There are two subarrays with sum = 4, [1, 2, 1] and [2, 1, 0, 1]. Hence the length of the longest subarray with sum = 4 is 4.

#include <bits/stdc++.h> 
// the sum of elements till index "i" will get stored at index "i+1" in new array
// the sum of elements in subarray form index "i" to index "j" will be calculated from indexes "j+1" and "i" in new array

int getLongestSubarray(vector<int>& nums, int k){
    int sum, i, j, n, c, temp_count, count ;
    temp_count = count = 0 ;
    n= nums.size() ;
    vector <int> a ;
    sum = 0 ;
    // storing addition of elements from given array into the array a
    for(i=0 ; i<n+1 ; i++){
        if(i==0){
            a.push_back(0); // at 0th index sum is always 0
        }
        else{
            sum= sum+nums[i-1] ;
            a.push_back(sum) ;
        }
    }

    for(i=0 ; i<n ; i++){ // for starting index of subarray
        for(j=i ; j<n ; j++){// for end index of subarray
            c=(j-i)+1 ; // will calculate length of subarray
            sum = a[j+1] - a[i] ; // will calculate sum of elements in subarray 
            if(sum==k){
                temp_count=c ;
            }
            else if(a[c]>k){ // bcoz of negative numbers else break 
                continue ;
            }
        }
        if(count<temp_count)
            count=temp_count ;
    }

    if(count==0)
        return 0 ;
    else
        return count ;
    return 0 ;
}