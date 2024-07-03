// Sam want to read exactly ‘TARGET’ number of pages.
// He has an array ‘BOOK’ containing the number of pages for ‘N’ books.
// Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.
// Example:
// Input: ‘N’ = 5, ‘TARGET’ = 5
// ‘BOOK’ = [4, 1, 2, 3, 1] 
// Output: YES
// Explanation:
// Sam can buy 4 pages book and 1 page book.

#include <bits/stdc++.h>

string read(int n, vector<int> book, int target)
{
    string ans="NO" ;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            if(book[i]+book[j]==target){
                ans = "YES" ;
                return  ans;
            }
        }
    }
    return ans ;
}
