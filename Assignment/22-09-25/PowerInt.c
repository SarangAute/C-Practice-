#include<stdio.h>
int main(){
	int base, power,count;
	printf("ENTER THE BASE AND POWER TO CALCULATE: ");
	scanf("%d%d",&base,&power);
	count=base;

	while(power!=1){
		base *= count;
		power--;
	}

	printf("RESULT : %d\n",base);
}
