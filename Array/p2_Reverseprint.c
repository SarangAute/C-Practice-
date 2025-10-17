#include<stdio.h>
int main(){
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

	printf("THE VALUES STORED IN ARRAY IN REVERSE ARE :\n");
	for(int i=4; i>=0; i--){
		printf("[%d] = %d   ",i, Arr[i]);
	}
	printf("\n");
	
}
