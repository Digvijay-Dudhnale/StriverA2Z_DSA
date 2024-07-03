// You are given an array ‘NUMS’ of length ‘N’. You are also given an integer ‘TARGET’.
// Return an array of all the unique quadruplets [ ‘NUMS[ a ]’, ‘NUMS[ b ]’, ‘NUMS[ c ]’, ‘NUMS[ d ]’ ] with the following conditions:
// i. 0 <= a, b, c, d < ‘N’ and a, b, c, and d are distinct.
// ii. NUMS[ a ] + NUMS[ b ] + NUMS[ c ] +NUMS[ d ] = TARGET
// Return the array in any order.

#include<bits/stdc++.h>

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n ;
    int sum ;
    n= nums.size() ;
    set<vector<int>> st ;
    // Solution 1
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         for(int k=j+1 ; k<n ; k++){
    //             for(int l=k+1 ; l<n ; l++){
    //                 sum = nums[i]+nums[j] ;
    //                 sum+=nums[k] ;
    //                 sum+=nums[l] ;
    //                 if(sum==target){
    //                     vector<int> temp{nums[i],nums[j],nums[k],nums[l]} ;
    //                     sort(temp.begin(),temp.end()) ;
    //                     st.insert(temp) ;
    //                 }
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end()) ;
    // return ans ;

    // Solution 2
    // int fourth ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         set<int> hashset ;
    //         for(int k=j+1 ; k<n ; k++){
    //             sum = nums[i]+nums[j] ;
    //             sum+=nums[k] ;
    //             fourth=target - sum ;
    //             if(hashset.find(fourth)!=hashset.end()){
    //                 vector<int> temp{nums[i],nums[j],nums[k],fourth} ;
    //                 sort(temp.begin(),temp.end()) ;
    //                 st.insert(temp) ;
    //             }
    //             hashset.insert(nums[k]) ;  
    //         }

    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end()) ;
    // return ans ;

    // Solution 3
    vector<vector<int>> ans ;
    int k,l ;
    sort(nums.begin(),nums.end()) ;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1])
            continue;
        for(int j=i+1; j<n; j++){
            if(j>i+1 && nums[j]==nums[j-1])
                continue;

            k=j+1 ;
            l=n-1 ;
            while(k<l){
                sum=nums[i] ;
                sum+=nums[j] ;
                sum+=nums[k] ;
                sum+=nums[l] ;
                if(sum==target){
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]} ;
                    ans.push_back(temp) ;
                    k++ ;
                    l-- ;
                    while(k<l && nums[k]==nums[k-1]) 
                        k++ ;
                    while(k<l && nums[l]==nums[l+1]) 
                        l-- ;
                }
                else if(sum<target)
                    k++ ;
                else
                    l-- ;
            }
        }
    }
    return ans ;
}