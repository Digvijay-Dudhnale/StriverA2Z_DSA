// There is an integer array ‘A’ of size ‘N’.
// A sequence is successive when the adjacent elements of the sequence have a difference of 1.
// You must return the length of the longest successive sequence.
// Note:
// You can reorder the array to form a sequence. 
// For example,
// Input:
// A = [5, 8, 3, 2, 1, 4], N = 6
// Output:
// 5
// Explanation: 
// The resultant sequence can be 1, 2, 3, 4, 5.    
// The length of the sequence is 5

#include<bits/stdc++.h>

void merge(vector<int>&a, int low, int mid, int high){
    // My Solution 10/12
    vector<int> temp ; // temporary array for storing elements
    int left, right ;
    left=low ;
    right=mid+1 ;
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            temp.push_back(a[left]) ;
            left++ ;
        } else if (a[left] == a[right]) {
            temp.push_back(a[left]);
            left++;
            temp.push_back(a[right]);
            right++;
        }
        else{
            temp.push_back(a[right]) ;
            right++ ;
        }
    }

    if(left>mid){
        while(right<=high){
            temp.push_back(a[right]) ;
            right++ ;
        }
    }
    else{
        while(left<=mid){
            temp.push_back(a[left]) ;
            left++ ;
        }
    }

    for(int i=low ; i<=high ; i++){
        a[i] = temp[i-low] ;
    }
}

void mergesort(vector<int>&a,int low, int high){
    if(low>=high) 
        return;
    int mid = (low+high)/2 ;
    mergesort(a,low,mid) ;
    mergesort(a,mid+1,high) ;
    merge(a,low,mid,high) ;
}

int longestSuccessiveElements(vector<int> &a) {

    // sorting the elements in array - merge sort
    int n = a.size();
    int low = 0, high = n - 1;
    mergesort(a, low, high);

    // for (int i = 0; i < n; i++){
    //     cout<<a[i]<<" " ;
    // }
    int ans=1, count=1 ; // count=1 bcoz single number is always in sequence
    for(int i=0 ; i<n-1 ; i++){
        if(a[i]!=a[i+1]){ // if elements are same then skip
            if ((a[i] + 1) == a[i + 1]) { // if the difference is 1
              count = count + 1;
            }
            else { // if difference is greater than 1
              if (ans < count) {
                ans = count;
              }
              count = 1;
            }
        }
    }

    return ans ;


// NINJA 1st
// int n=a.size();

// int length =1;

// for(int i=0;i<n;i++){

// int temp=a[i];

// int count=1;

// while (find(a.begin(), a.end(), temp + 1) != a.end()){

// temp=temp+1;

// count=count+1;

// }

// length = max(length, count);

// }

// return length;

//NINJA 2nd same as mine
// int n=a.size();

// int length =1;

// int count=1;

// sort(a.begin(),a.end());

// for(int i=0;i<n-1;i++){

// if (a[i] != a[i + 1]) {

// if(a[i]+1==a[i+1]){

// count++;

// } else {

// count = 1;

// }

// length = max(length, count);

// }

// }

// return length;

}