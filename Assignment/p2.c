/*A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

Example 1:

Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.

Example 2:

Input: arr = [1,2,4]
Output: false
Explanation: There is no way to reorder the elements to obtain an arithmetic progression.
*/

#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int canMakeArithmeticProgression(int* arr, int arrSize) {
    int temp;
    qsort(arr,arrSize, sizeof(int),compare);
    temp = arr[0]-arr[1];

    for(int i=0; i<arrSize-1; i++){
        if(arr[i] - arr[i+1] != temp)
            return 0;
    }
    return 1;
}


int main(){
	int arr[]={3,5,1};
	int size = (*arr/arr[0]);
	if(canMakeArithmeticProgression(arr,size)==0)
		printf("false\n");
	else
		printf("true\n");

}
