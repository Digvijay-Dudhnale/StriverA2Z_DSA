// You are given an array ‘ARR’ containing ‘N’ integers.
// Return all the unique triplets [ARR[i], ARR[j], ARR[k]] such that i != j, j != k and k != i and their sum is equal to zero.
// Example:
// Input: ‘N’ = 5 
// 'ARR' =  [-1, -1, 2, 0, 1] 
// Output: 
// -1 -1 2
// -1 0 1

#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // // Solution 1
    // int sum ;
    // // vector<vector<int>> ans ;
    // set<vector<int>> st ;
    // for(int i=0 ; i<n-2 ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         for(int k=j+1 ; k<n ; k++){
    //             sum=arr[i]+arr[j]+arr[k] ;
    //             if(sum==0){
    //                 vector<int> temp{arr[i],arr[j],arr[k]} ;
    //                 sort(temp.begin(),temp.end()) ;
    //                 st.insert(temp) ;
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end()) ;
    // return ans ;

    // Solution 2
    // int third ;
    // set<vector<int>> st ;
    // for(int i=0 ; i<n ; i++){
    //     set<int> hashset ;
    //     for(int j=i+1 ; j<n ; j++){
    //         third = -(arr[i]+arr[j]) ;
    //         if(hashset.find(third)!=hashset.end()){
    //           vector<int> temp{arr[i], arr[j], third};
    //           sort(temp.begin(), temp.end());
    //           st.insert(temp);
    //         }
    //         hashset.insert(arr[j]) ;
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end()) ;
    // return ans ;

    // Solution 3
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) 
            continue;

        int j=i+1;
        int k=n-1;

        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])
                    j++;
                while(j<k && arr[k]==arr[k-1]) 
                    k--;
            }
        }
    }
    return ans;
}