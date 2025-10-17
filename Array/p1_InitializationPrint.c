#include<stdio.h>
int main(){
	//int a[5] = {10,20,30,40,50};
	//int a[] = {10,20,30,40,50};
	int Arr[5], num, count=0;

	printf("ENTER THE 5 VALUES IN ARRAY:  ");
	for(int i=0; i<5; i++){
		scanf("%d",&Arr[i]);
	}

	printf("THE VALUES STORED IN ARRAY ARE :\n");
	for(int i=0; i<5; i++){
		printf("[%d] = %d   ",i, Arr[i]);
	}
	printf("\n");
}
