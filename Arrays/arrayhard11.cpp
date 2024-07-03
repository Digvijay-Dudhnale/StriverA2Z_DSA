// School is organizing a team contest. You are given an array ‘SKILL’ containing the skill level of ‘N’ candidates.
// Two candidates(having index ‘i’ and ‘j’) can pair up to form a team if for index i < j, SKILL[i] > 2*SKILL[j].
// Your task is the return the count of all the possible pairs to take part in the contest.
// Example:
// Input: ‘N’ = 5
// ‘SKILL’ = [4, 1, 2, 3, 1] 
// Output: 3

#include<bits/stdc++.h>
using namespace std ;

int merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    long long cnt =  0;
    //count reverse pairs
    while(left<=mid && right<=high){
        long long condition = (2LL * arr[right]);
        if(arr[left] > condition){
            cnt += (mid - left + 1);
            right ++;
        }
        else left++;
    }
    //merge left and right subarrays
    left = low;
    right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    //replace the array elements to make sorted
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    return cnt;
}
int mergeSort(vector<int>&arr, int low, int high){
    long long cnt = 0;
    if(low>=high)return cnt;
    int mid = (low+high)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
            cnt += merge(arr, low, mid, high);

    return cnt;
}

int team(vector <int> & skill, int n){
    
    // int count=0 ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i ; j<n ; j++){
    //         if(skill[i]>skill[j]*2)
    //             count++ ;
    //     }
    // }

    // return count ;
    return mergeSort(skill, 0, n-1);
}
