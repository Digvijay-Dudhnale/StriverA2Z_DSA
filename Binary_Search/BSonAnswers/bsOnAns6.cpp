// You are the owner of a Shipment company. You use conveyor belts to ship packages from one port to another. The packages must be shipped within 'd' days.
// The weights of the packages are given in an array 'weights'. The packages are loaded on the conveyor belts every day in the same order as they appear in the array. 
// The loaded weights must not exceed the maximum weight capacity of the ship.
// Find out the least-weight capacity so that you can ship all the packages within 'd' days.

#include<bits/stdc++.h>
using namespace std ;

int daysRequired(vector<int>&weights, int mid, int totalPackages){

    int days_count=0 ;
    days_count=1 ;
    int sumOfWeight=0 ;
    for(int i=0 ; i<totalPackages ; i++){
        sumOfWeight += weights[i] ;

        // if(sumOfWeight>mid){
        //     i-- ;
        //     days_count++ ;
        //     sumOfWeight=0 ;
        // }
        // else if(sumOfWeight==mid){
        //     days_count++ ;
        //     sumOfWeight=0 ;
        // }
        // else if(i==(totalPackages-1)){
        //     days_count++ ;
        // }

        if(sumOfWeight>mid){
            days_count++ ;
            sumOfWeight=weights[i] ;
        }
        
    }

    return days_count ;
}


int leastWeightCapacity(vector<int> &weights, int d)
{
    int totalPackages = weights.size() ;
    int sumOfPackages=0 ;
    
    for(int i=0 ; i<totalPackages ; i++){
        sumOfPackages+=weights[i] ;
    }

    int low=*max_element(weights.begin(),weights.end()) ;
    int high = sumOfPackages ;

    int mid, days, min_capacity=0 ;
    while(low<=high){

        mid = low+(high-low)/2 ;
        days = daysRequired(weights, mid, totalPackages) ;
        // cout<<mid<<endl ;
        // cout<<days<<endl ;
        if(days>d){
            low = mid+1 ;
        }
        else{
            min_capacity = mid ;
            high = mid-1 ;
        }
    }

    return min_capacity ;
}