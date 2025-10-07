#include<stdio.h>
int main(){
	int num;
	printf("ENTER THE NUMBER TO CHECK WEATHER THE NUMBER IS EVEN OR ODD:  ");
	scanf("%d",&num);
	
	if((num & 1) == 0)
		printf("**EVEN**\n");
	else
		printf("**ODD**\n");
}
