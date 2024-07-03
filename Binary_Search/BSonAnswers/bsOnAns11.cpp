// Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
// You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.
// Example :
// Input: arr = [2, 1, 5, 6, 2, 3], k = 2
// Output: 11
// Explanation:
// First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time.


#include<bits/stdc++.h>
using namespace std ;

int isPossible(vector<int>boards,int mid, int k){
    
    int painterCount=1 ;
    int boardSize=0, sum=0 ;
    int maxBoardSize = accumulate(boards.begin(),boards.end(),0) ;
    
    for(int i=0 ; i<boards.size() ; i++){
        if(boardSize+boards[i]<=mid){
            boardSize+=boards[i] ;
        }
        else{
            if(boardSize>sum)
                sum=boardSize ;
            painterCount++ ;
            if(painterCount>k)
                return maxBoardSize;
            boardSize=boards[i] ;
        }
    }
    if(boardSize>sum)
        return boardSize;
    else
        return sum;
}

int findLargestMinDistance(vector<int> &boards, int k){
    int low, high, mid, ans ;
    low=*min_element(boards.begin(),boards.end()) ;
    high=accumulate(boards.begin(),boards.end(),0) ;

    while(low<=high){

        mid=low+(high-low)/2 ;
        int sum = isPossible(boards,mid,k) ;
        if(sum<=mid){
            ans=mid ;
            high=mid-1 ;
        }
        else{
            low=mid+1 ;
        }
    }
    return ans ;
}

// #include<bits/stdc++.h>

// int isPossible(vector<int>a, int k , int mid){

//     int arrayCount=1 ;
//     int smallestElement = *min_element(a.begin(),a.end()) ;
//     int totalSum = accumulate(a.begin(),a.end(),0) ;
//     int tempSum=0, sum=0 ;
//     for(int i=0 ; i<a.size() ; i++){
//         if(tempSum+a[i]<=mid){
//             tempSum+=a[i] ;
//         }
//         else{
//             if(tempSum>sum) // if the subarray has larger sum
//                 sum=tempSum ;
//             arrayCount++ ;
//             if(arrayCount>k)
//                 return totalSum ; // we need to increase the sum
//             tempSum=a[i] ;
//         }
//     }
//     // if(arrayCount==k)
//     //     return sum ; 
//     // else
//     //     return smallestElement ; // we need to reduce the sum
//     if(tempSum>sum)
//         return tempSum ;
//     else
//         return sum ;
// }

// int findLargestMinDistance(vector<int> &a, int k) {
//     int low, high, mid, ans ;
//     low=*min_element(a.begin(),a.end()) ;
//     high=accumulate(a.begin(),a.end(),0) ;

//     while(low<=high){

//         mid=low+(high-low)/2 ;
//         int sum = isPossible(a,k,mid) ;
//         if(sum<=mid){ // possible answer
//             ans=mid ;
//             high=mid-1 ;
//         }
//         else{
//             low=mid+1 ;
//         }
//     }
//     return ans ;
// }