// There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.

#include<bits/stdc++.h>

long reverseBits(long n) {
    int count, rem, i, j ;
    long ans=0 ;
    vector <int> arr ; // for storing reverse 32-bit number
    count=0 ; // for counting elements pushed in array
    if(n==0){
        return 0 ;
    }
    else if(n==1){
        ans = round(pow(2,31)) ;
        return ans ;
    }
    else{
        while(n>=2){ // to store reverse 32-bit number
            rem = n%2 ; // returns required bits '0' or '1' 
            arr.push_back(rem) ;
            count++ ;
            n = n/2 ; // step to convert integer to binary
            if(n==1){
                arr.push_back(1) ;
                count++ ;
                for(i=count+1;i<=32;i++){ // when reversed number stored this will add 0's in remaining places 
                    arr.push_back(0);
                }
            }
        }

        for(i=0;i<32;i++){ // for converting binary to integer
            if(arr[i]==1){
                j = 31-i ;
                ans=ans+round(pow(2,j)) ;
            }
        }
    }
    return ans ;
}