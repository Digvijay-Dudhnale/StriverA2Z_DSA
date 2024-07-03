// You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.
// You must sort the elements between 'l' and 'r'. // merge sort

#include<bits/stdc++.h>

void merge(vector<int>&arr, int low, int mid, int high){ // int arr[]
    // int temp[high+1] ;
    vector<int> temp ;
    int left, right,i=0 ;
    left = low ;
    right = mid+1 ;

    while(left<=mid && right<=high){ // comparing elements from left and right array
        if(arr[left]<arr[right]){
            // temp[i]=arr[left] ;
            // i++ ;
            temp.push_back(arr[left]) ;
            left++ ;
        }
        else if(arr[left]==arr[right]){
            // temp[i]=arr[left] ;
            // i++ ;
            temp.push_back(arr[left]) ;
            left++ ;
            // temp[i]=arr[right] ;
            // i++ ;
            temp.push_back(arr[right]) ;
            right++ ;
        }
        else{
            // temp[i]=arr[right] ;
            // i++ ;
            temp.push_back(arr[right]) ;
            right++ ;
        }
    }

    if(left>mid){ // if elements in left array are pushed completely
        while(right<=high){
            // temp[i]=arr[right] ;
            // i++ ;
            temp.push_back(arr[right]) ;
            right++ ;
        }
    }
    else{ // if elements in right array are pushed completely
        while(left<=mid){
            // temp[i]=arr[left] ;
            // i++ ;
            temp.push_back(arr[left]) ;
            left++ ;
        }
    }

    for( i=low ; i<=high ; i++){
        arr[i]=temp[i-low] ; // we are storing elements in temp from index 0,
    }

}

void mergeSort(vector<int> &arr, int l, int r) {
    if(l>=r)
        return ;

    int mid ;
    mid = (l+r)/2 ;
    mergeSort(arr, l, mid) ; // recursive call on left sub-array
    mergeSort(arr,mid+1,r) ; // recursive call on right sub-array
    merge(arr,l,mid,r) ; // recursvie call for merging both subarrays
}