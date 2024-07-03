// A monkey is given ‘n’ piles of bananas, where the 'ith' pile has ‘a[i]’ bananas. An integer ‘h’ is also given, which denotes the time (in hours) in which all the bananas should be eaten.
// Each hour, the monkey chooses a non-empty pile of bananas and eats ‘m’ bananas. If the pile contains less than ‘m’ bananas, then the monkey consumes all the bananas and won’t eat any more bananas in that hour.
// Find the minimum number of bananas ‘m’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.

#include<bits/stdc++.h>
using namespace std ;

int TotalHours(vector<int> a , int mid){
    int count=0 , n=a.size() ;
    for(int i=0 ; i<n ; i++){
        count+=ceil(((double)a[i]/(double)mid)) ;
    }
    return count ;
}

// int func(int x, int n, vector<int> &arr){

//     int cnt = 0;
//     for(int i = 0; i < n; i++) cnt += ceil(((double)arr[i]/(double)x));
//     return cnt;
// }


int minimumRateToEatBananas(vector<int> a, int h) {
    
    int vector_size = a.size() ;
    long int total_hours , hours_required, minimum_bananas ;
    bool flag=false ;

    int max_bananas=0 ;
    for(int i=0 ; i<vector_size ; i++){
        if(a[i]>max_bananas)
            max_bananas=a[i] ;
    }

    // Solution 1 ---->>> time limit exceed
    // for(int j=1 ; j<=max_bananas ; j++){ // Infinite loop
    //     total_hours=0 ;
    //     for(int i=0 ; i<vector_size ; i++){
    //         if(a[i]%j==0)
    //             hours_required=(a[i]/j) ;
    //         else
    //             hours_required=(a[i]/j) + 1 ;

    //         total_hours=total_hours+hours_required ;

    //         if(total_hours>h){
    //             minimum_bananas = 0 ;
    //             break ;
    //         }
    //         if(total_hours<=h && i==(vector_size-1)){
    //             flag = true ;
    //             minimum_bananas=j ;
    //         }
    //     }
    //     if(flag){
    //         break;
    //     }
    // }
    // return minimum_bananas ;

    // Solutio 2 --->>> using binary search
    int low=0 ;
    int high=max_bananas ;

    if(vector_size==max_bananas)
        return max_bananas ;

    while(low<=high){
        int mid=low+(high-low)/2 ;
    
        total_hours = TotalHours(a,mid) ;
        if(total_hours<=h)
            high=mid-1 ;
        else
            low=mid+1 ;
    }

    if(low==0)
        return 1 ;

    return low ;    

    // long long n = v.size();
    // long long maxi = 0, sum = 0;

    // for(int i = 0; i < n; i++){
    //     if(v[i] > maxi) maxi = v[i];
    // }

    // if(n == h) return maxi;

    // long long low = 0, high = maxi;

    // while(low <= high){
    //     long long mid = (low + high)/2;
    //     long long hours = func(mid, n, v);

    //     if(hours <= h) high = mid - 1;

    //     else low = mid + 1;
    // }
    // if(low == 0) return 1;
    // return low;
}