// You have been given an array/list 'arr' consisting of 'n' elements.
// Each element in the array is either 0, 1 or 2.
// Sort this array/list in increasing order.
// Do not make a new array/list. Make changes in the given array/list.
// Example :
// Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]
// Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

#include <bits/stdc++.h> 

// int Partition(vector<int> &arr, int start, int end){
//     int temp, pivot, i, j ;
//     pivot = arr[start] ;
//     i = start ;
//     j = end ;

//     while(i<j){
//         while(arr[i]<=pivot && i<=end-1){
//             i++ ;
//         }
//         while(arr[j]>=pivot && j>=start+1){
//             j-- ;
//         }
//         if(i<j){
//             temp=arr[i] ;
//             arr[i]=arr[j] ;
//             arr[j]=temp ;
//         }
//     }

//     temp = arr[start] ;
//     arr[start]=arr[j] ;
//     arr[j]=temp ;
    
//     return j ;
// }


// void quick_sort(vector<int>&arr, int start, int end){
//     if(start<end){
//         int part_ind = Partition(arr,start,end) ;
//         quick_sort(arr,start,part_ind-1) ;
//         quick_sort(arr,part_ind+1,end) ;
//     }
//     else
//         return;

// }

void sortArray(vector<int>& arr, int n)
{
    // bubble sort
    // int temp ;
    // for(int i=0 ; i<n-1 ; i++){
    //     for(int j=0 ; j<n-(i+1) ; j++){
    //         if(arr[j]>arr[j+1]){
    //             temp = arr[j] ;
    //             arr[j] = arr[j+1] ;
    //             arr[j+1] = temp ;
    //         }
    //     }
    // }

    // quick sort
    // quick_sort(arr,0,n-1) ;

    // inbuilt sort function
    // sort(arr.begin(),arr.end()) ;
    
    int zero,one,two;
    zero=one=two=0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0)
            zero++ ;
        else if(arr[i]==1)
            one++ ;
        else
            two++ ;
    }

    int index=0 ;
    while(zero--){
        arr[index]=0 ;
        index++ ;
    }
    while(one--){
        arr[index]=1 ; 
        index++ ;
    }
    while(two--){
        arr[index]=2 ;
        index++ ;
    }
}
