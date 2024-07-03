// You are given an array of integers 'prices' of size 'n', where ‘prices[i]’ is the price of a given stock on an ‘i’-th day.
// You want to maximize the profit by choosing a single day to buy one stock and a different day to sell that stock.
// Please note that you can’t sell a stock before you buy one.
// Return the maximum profit you can achieve from this transaction.
// Example :
// Input: ‘prices’ =[7, 1, 5, 4, 3, 6]
// Output: 5
// Explanation: Purchase stock on day two, where the price is one, and sell it on day six, where the price is 6, profit = 6 - 1 = 5.

#include<bits/stdc++.h>

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    //my solution
    int n=prices.size() ;
    int profit=0 ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         if((prices[j] - prices[i])>profit){
    //             profit = prices[j]-prices[i] ;
    //         } 
    //     }
    // }

    int min_val=prices[0] ;
    for(int i=1 ; i<n ; i++){
        if((prices[i]-min_val)>profit) // calculating max profit
            profit = prices[i]-min_val ;
        if(prices[i]<min_val) // if buying price is less profit will be greater
            min_val = prices[i] ;
    }
    return profit ;
}
