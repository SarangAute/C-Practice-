#include<stdio.h>
int main(){
	int Arr[10], num, count=0;

	printf("ENTER THE 10 VALUES IN ARRAY:  ");
	for(int i=0; i<10; i++){
		scanf("%d",&Arr[i]);
	}

	printf("THE VALUES STORED IN ARRAY ARE :\n");
	for(int i=0; i<10; i++){
		printf("[%d] = %d   ",i, Arr[i]);
	}
	printf("\n");

	printf("ENTER THE NUMBER TO SEARCH COUNT IN ARRAY: ");
	scanf("%d",&num);
	for(int i=0; i<10; i++){
		if(num == Arr[i])
			count++;
	}
	printf("\n");
	printf("%d VALUE IS REAPEATED IN ARRAY FOR %d TIMES...\n",num,count);
}
