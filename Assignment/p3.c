/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/

#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
        int i=0,j=0,arr[nums1Size+nums2Size];
        for(i=0;i<nums1Size+nums2Size;i++){
                if(i<nums1Size)
                        arr[i] = nums1[i];
                else
                        arr[i] = nums2[j++];
        }
        int arrSize = sizeof(arr)/sizeof(arr[0]);
        
        qsort(arr,arrSize, sizeof(int),compare);

        if(arrSize%2==0)
                return ((arr[(arrSize/2)-1]+arr[arrSize/2])/2.0);
        else
                return (arr[(arrSize/2)]);
}

int main(){
	int arr1[] = {1,3};
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[] = {2};
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	printf("%f\n",findMedianSortedArrays(arr1,size1,arr2,size2));

}
