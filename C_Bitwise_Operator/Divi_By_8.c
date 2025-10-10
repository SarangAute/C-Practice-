#include<stdio.h>
int main(){
	int num, count=0;
	printf("ENTER THE NUMBER TO CHECK THE NUMBER IS DIVISIBLE BY 8 OR NOT : ");
	scanf("%d",&num);
	
	if(((num & 7) ==0) && (num > 7)){
		printf("Yes, divisible by 8...\n");
	}
	else
		printf("Not divisible by 8..\n");
	


	
}
