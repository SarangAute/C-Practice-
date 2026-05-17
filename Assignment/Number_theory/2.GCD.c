/*
 Q2. Sum of GCD Pairs	(GCD - Greatest Common Devisor)
Problem:
Given an array of integers, pair them up and compute the GCD of each pair. Return thesum of all pair GCDs.
Input:
Array size and array elements
Output:
Sum of GCDs of all pairs
Example:
	Size : 4
	arr[] : {1, 4, 9, 6}
	Pairs : {1, 6} → GCD = 1
	{4, 9} → GCD = 1
	Output : 1 + 1 = 2
 */

#include<stdio.h>
#include<stdlib.h>

int GCD(int *arr, int n){
	int sum=0;
	for(int i=0;i<n/2;i++){
		int count=1;
		for(int j=1;j<arr[i] && j<=arr[n-i-1] ;j++){
			if((arr[i]%j ==0)&&(arr[n-i-1]%j ==0))
				count=j;
		}
		sum += count;
	}
	return sum;
}

int main(){
	int n;
	printf("ENTER SIZE OF ARRAY: ");
	scanf("%d",&n);

	int *arr = (int*)malloc(n * sizeof(int));

	printf("ENTER ELEMENTS IN ARRAY : \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("OUTPUT: %d \n",GCD(arr,n));
}
