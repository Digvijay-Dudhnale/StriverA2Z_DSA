// The Road Department is planning to make some new traffic regulations. But to make the regulations they need to analyze the current situation of the traffic.
// The traffic can be analyzed from an array 'VEHICLE' of length 'N' , which consists of ‘0’ if there is no vehicle at that point and ‘1’ if there is a vehicle at the point.
// Unfortunately the array ‘VEHICLE’ got corrupted as at most 'M' '1' got flipped to ‘0’.
// Traffic jam is defined as the length of consecutive vehicles on the road.
// The Road Department wants to know the worst possible scenario for the traffic jam. Return the maximum possible length of the consecutive vehicles.
// Example:
// Input: ‘N’ = 3, ‘M’ = 1, VEHICLE’ = [0, 1, 1]
// Output: 3
// Explanation:
// As there is at most one 1 that got flipped to 0, so for the worst-case scenario we can reflip the first(1-based ) index to 1, resulting in a length of 3. 

#include <bits/stdc++.h>

int traffic(int n, int m, vector<int> vehicle) {
	int i, j, first_index, last_index, temp_count, count ;
	first_index = last_index = 0 ; // for calculating consecutive no. of 1's 
	count = temp_count = 0 ; // for storing consecutive 1's 
	while(last_index<n){
		j=0 ; // for iterating flipped 0's
		for(i=first_index;i<n;i++){
			if(vehicle[i]==0 && j<m){
				//vehicle[i]=1 ; // this will change the array permenantly changing flipped 1's and we get wrong answer
				j++ ;
			}
			else if(vehicle[i]==0) // break the loop if all flipped 1's are over
				break ;
		}
		last_index=i ; // last_index will be next 0th position
		temp_count = last_index-first_index ; // consecutive 1's
		if(count<temp_count)
			count = temp_count ; // updated total consecutive 1's
		first_index++ ; // for starting new loop of consecutive 1's
	}

	return count ;
}