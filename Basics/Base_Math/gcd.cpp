// You are given two integers 'n', and 'm'.
// Calculate 'gcd(n,m)', without using library functions.
// Note:
// The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.
// Example:
// Input: 'n' = 6, 'm' = 4
// Output: 2
// Explanation:
// Here, gcd(4,6) = 2, because 2 is the largest positive integer that divides both 4 and 6.

#include<bits/stdc++.h>

int calcGCD(int n, int m){
    int rem1, rem2, num=1 ;

    if(n==0 || m==0){
        if(n==0) // n==0
            return m ;
        else // m==0 
            return n ;
    }

    // gcd is either less or equal to the smaller number 

    for(int i=2 ; i<=min(n,m) ; i++){
        rem1 = n%i ; // rmainder after dividing n
        rem2 = m%i ; // rmainder after dividing m
        if(rem1==0 && rem2==0){ 
            num=i ; // stores gcd
        } 
    }
    return num ;
}

// while loop


// int calcGCD(int n, int m){
//     int rem1, rem2, num=0, i ; // num=1

//     // if(n==0 || m==0){
//     //     if(n==0) // n==0
//     //         return m ;
//     //     else // m==0 
//     //         return n ;
//     // }

//     // gcd is either less or equal to the smaller number 
//     i=1 ; //num =2
//     while(i<=min(n,m)){
//         rem1 = n%i ; // rmainder after dividing n
//         rem2 = m%i ; // rmainder after dividing m
//         if(rem1==0 && rem2==0){ 
//             num=i ; // stores gcd
//         } 
//         i++;
//     }
//     return num ;
// }