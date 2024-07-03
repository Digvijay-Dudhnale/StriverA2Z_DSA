// Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.
// Note :
// Make changes in the input array itself.

#include<bits/stdc++.h>

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	int pivot, i, j, temp ;
	pivot = input[start] ;
	i = start ;
	j = end ;
	while(i<j){
		while(input[i]<=pivot && i<=end-1){
			i++ ;
		}
		while(input[j]>=pivot && j>=start+1){
			j-- ;
		}
		if(i<j){
			temp = input[i] ;
			input[i] = input[j] ;
			input[j] = temp ;
		}
	}

	temp = input[start] ;
	input[start] = input[j] ;
	input[j] = temp ;
	return j ;

}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int partition ;
		partition = partitionArray(input, start, end) ;
		quickSort(input, start, partition-1) ;
		quickSort(input, partition+1 , end) ;
	}
	else
		return;

	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
}