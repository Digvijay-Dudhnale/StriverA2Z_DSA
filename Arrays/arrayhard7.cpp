// Ninja is playing with intervals. He has an array of intervals called ‘Arr’ having ‘N’ intervals.
// However, he doesn’t like overlapping intervals. So you must help Ninja by merging all the overlapping 
// intervals in ‘Arr’ and return an array of non-overlapping intervals.
// Note:
// Two intervals [L1, R1] and [L2, R2] such that L1 <= L2, are said to be overlapping if and only if L2 <= R1.
// For example:
// For ‘N’ = 4, and 
// ‘Arr’ = {{1, 3}, {2, 4}, {3, 5}, {6, 7}}
// We can see that {1, 3} and {2, 4} overlap, so if we merge them, we get {1, 4}.
// Now ‘Arr’ becomes: {{1, 4}, {3, 5}, {6, 7}}
// Still, we observe that {1, 4} and {3, 5} overlap, hence we merge them into {1, 5}.
// Hence, ‘Arr’ becomes {{1, 5}, {6, 7}}.

#include<bits/stdc++.h>
#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Solution 1
	// if (arr.empty()){
	// 	return {};
	// }
	// sort(arr.begin(), arr.end());
	// vector<vector<int>> ans;
	// ans.push_back(arr[0]);
	// for (int i = 1; i < arr.size(); i++){
	// 	if (ans.back()[1] >= arr[i][0]){
	// 		// Overlapping intervals
	// 		ans.back()[1] = max(ans.back()[1], arr[i][1]);
	// 	}
	// 	else{
	// 		// Non-overlapping intervals
	// 		ans.push_back(arr[i]);
	// 	}
	// }
	// return ans;

	// Solution 2
	// end , start
	vector<vector<int>>ans;
	int start;
	int end;
	int index =  0;

	while(index < arr.size())
	{
		start = arr[index][0];
		end = arr[index][1];

		while(index+1 < arr.size() and arr[index+1][0] <= end)
		{
			end = max(arr[index+1][1],end);
			index++;
		}
        
		ans.push_back({start , end});
		index++;
    }
	return ans;
}