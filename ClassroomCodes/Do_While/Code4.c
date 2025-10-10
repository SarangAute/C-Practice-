#include<stdio.h>
int main(){
	int i =10;
	do{
		printf("Chennai \n");
		if(i > 14)
			break;
		printf("Vector \n");
	}while(++i < 14);
	printf("%d \n",i);
}
