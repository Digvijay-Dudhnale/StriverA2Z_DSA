// Check whether a given number ’n’ is a palindrome number.
// Note :
// Palindrome numbers are the numbers that don't change when reversed.
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: 'n' = 51415
// Output: true
// Explanation: On reversing, 51415 gives 51415.

#include<bits/stdc++.h>

bool palindrome(int n)
{
    // int rem, rev_num=0, s, multiplier=1, n_new ;
    // string str ;
    // str = to_string(n) ;
    // s = str.size() ;
    // n_new = n ;
    // for(int i=1 ; i<s ; i++){
    //     multiplier = multiplier*10 ;
    // }

    // for(int i=0 ; i<s ; i++){
    //     rem = n%10 ;
    //     rev_num = rev_num+(multiplier*rem) ;
    //     multiplier = multiplier/10 ;
    //     n = n/10 ;
    // }

    // if(n_new==rev_num)
    //     return true;
    // else
    //     return false;

    int temp_n, last_dig, rev_num ;
    rev_num = 0 ; // for storing rverse number
    temp_n = n ; // for reversing we need duplicate else original number will get changed and comaparison is not possible
    while(temp_n>0){
        last_dig = temp_n % 10 ;
        rev_num = rev_num*10 + last_dig ;
        temp_n = temp_n/10 ;
    }

    if(n==rev_num)
        return true;
    else
        return false;
}