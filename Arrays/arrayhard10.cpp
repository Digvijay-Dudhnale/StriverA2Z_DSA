// There is an integer array ‘A’ of size ‘N’.
// Number of inversions in an array can be defined as the number of pairs of ‘i’, ‘j’ such that ‘i’ < ‘j’ and ‘A[i]’ > ‘A[j]’.
// You must return the number of inversions in the array.
// For example,
// Input:
// A = [5, 3, 2, 1, 4], N = 5
// Output:
// 7

#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int l,int r){
    int mid = (l + r) / 2;
    int left=l;
    int right=mid+1;
    vector<int> temp;
    int cnt=0;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int l, int r) {
    // Write Your Code Here
    int cnt=0;
    if(l==r){
        return cnt;
    }
    int mid= (l+r)/2;
    cnt += mergeSort(arr,l,mid);
    cnt += mergeSort(arr,mid+1,r);
    cnt += merge(arr,l,r);
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    // MY SOLUTION
    // int count=0 ;
    // for(int i=0 ;i<n;i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         if(a[i]>a[j])
    //             count++ ;
    //     }
    // }

    // return count ;

    return mergeSort(a,0,n-1);
}