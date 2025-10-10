#include<stdio.h>
int main(){
	int i =12;
	do{
		printf("Chennai \n");
		if(i < 14)
			continue;
		printf("Vector \n");
	}while(++i < 16);
	printf("%d \n",i);
}
