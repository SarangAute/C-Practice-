#include<stdio.h>
int main(){
	int num;
	printf("ENTER THE NUMBER TO CHECK WEATHER IT IS IN POWER OF 2 OR NOT : ");
	scanf("%d",&num);

	if((num>0) && (num & (num-1))==0){
		printf("THIS IS THE POWER OF 2...\n");

		int pow = 0;
		while(num != 0){
			num = num >> 1;
			pow ++;
		}
		printf("THE POWER OF 2 IS : %d \n ",pow-1);
	}
	else
		printf("THE NUMBER PROVIDED %d IS NOT A POWER OF 2 \n", num);
}
