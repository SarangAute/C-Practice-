/*Encryption Array Restoration
Problem:
An integer array of size 5 has some elements replaced with
-1
(missing values).Restore the array by replacing each
-1
with the
smallest valid 4-bit binary number
thatsatisfies:
LSB = 0 (i.e., the number is even)
Value ≥ 4
The smallest such number is
(1000)₂ = 8
. Return the
sum of the restored array
.
Input:
Array of size 5 (may contain -1)
Output:
Integer sum of the restored array
Example:
	Input : [4, -1, 6, 7, -1]
	Restored: [4, 8, 6, 7, 8]
	Output : 4 + 8 + 6 + 7 + 8 = 33
*/

#include<stdio.h>
#include<stdlib.h>

int Encrypt(int *arr, int n){
	for(int i=0; i<n; i++){
		if(arr[i] == -1)
			arr[i] = 1<<3;
	}
	int sum=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int n;
	printf("ENTER ARRAY SIZE : ");
	scanf("%d",&n);

	int *arr = (int*)malloc(n*sizeof(int));
	printf("ENTER ELEMENT IN ARRAY (with -1 for replacement): \n");
	for(int i=0; i<n; i++){
		printf("%d. ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("OUTPUT = %d \n",Encrypt(arr,n));
}
