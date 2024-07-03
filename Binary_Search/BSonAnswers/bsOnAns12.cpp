// You are given a sorted array ‘arr’ of length ‘n’, which contains positive integer positions of ‘n’ gas stations on the X-axis.
// You are also given an integer ‘k’.
// You have to place 'k' new gas stations on the X-axis.
// You can place them anywhere on the non-negative side of the X-axis, even on non-integer positions.
// Let 'dist' be the maximum value of the distance between adjacent gas stations after adding 'k' new gas stations.
// Find the minimum value of dist.

// NOTE : You will only see 1 or 0 in the output where:
//   1 represents your answer is correct.
//   0 represents your answer is wrong. 
// Answers within 10^-6 of the actual answer will be accepted.

// Constraints:
// 2 <= n <= 10^5
// 1 <= k <= 10^6 
// 1 <= arr[i] <= 10^9

#include<bits/stdc++.h>
using namespace std ;

int numberOfGasStationsRequired(long double dist, vector<int> &arr) {
    int n = arr.size(); // size of the array
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        int numberInBetween = ((arr[i] - arr[i - 1]) / dist);
        if ((arr[i] - arr[i - 1]) == (dist * numberInBetween)) {
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

double minimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size(); // size of the array
    long double low = 0;
    long double high = 0;

    //Find the maximum distance:
    for (int i = 0; i < n - 1; i++) {
        high = max(high, (long double)(arr[i + 1] - arr[i]));
    }

    //Apply Binary search:
    long double diff = 1e-6 ;
    while (high - low > diff) {
        long double mid = (low + high) / (2.0);
        int cnt = numberOfGasStationsRequired(mid, arr);
        if (cnt > k) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    return (double)high;
}
