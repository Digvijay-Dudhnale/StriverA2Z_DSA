// Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
// There are ‘m’ number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
// If the allocation of books is not possible, return -1.

#include<bits/stdc++.h>
using namespace std ;

bool isPossible(vector<int>arr,int m, int n, int mid){
    int studenCount=1 ;
    int pageCount=0 ;
    for(int i=0 ; i<n ; i++){
        if(pageCount+arr[i]<=mid){
            pageCount+=arr[i] ;
        }
        else{
            studenCount++ ;
            if(studenCount>m || arr[i]>mid)
                return false ;
            pageCount=arr[i] ;
        }
    }
    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    
    // sort(arr.begin(),arr.end()) ;
    int low, high, mid, ans=-1 ;
    low=*min_element(arr.begin(),arr.end()) ;
    high=accumulate(arr.begin(),arr.end(),0) ;
    
    if(m>n)
        return -1 ;
        
    while(low<=high){
        mid=low+(high-low)/2 ;

        if(isPossible(arr,m,n,mid)){
            ans = mid ;
            high=mid-1 ;
        }
        else{
            low=mid+1 ;
        }   
    }
    return ans ;
}