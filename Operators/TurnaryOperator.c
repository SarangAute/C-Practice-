#include<stdio.h>
int main (){
	int num, op;
	printf("ENTER A CHOICE \n	1. CHECK POSITIVE OR NEGATIVE \n	2. CHECK EVEN OR ODD \n");
	scanf("%d",&op);

	switch(op){
		case 1: {
			printf("ENTER A NUMBER TO CHECK ITS POSITIVE OR NEGATIVE : \n");
			scanf("%d",&num);
			num<0 ? printf("NEGATIVE TERM \n") : printf("POSITIVE TERM \n");
			}
			break;

		case 2: {
			printf("ENTER A NUMBER TO CHECK WEATHER IT IS EVEN OR ODD : \n");
			scanf("%d",&num);
			num % 2 ==0 ? printf("EVEN TERM \n") : printf("ODD TERM \n");
			}
			break;

		default: printf("ENTERED WRONG CHOICE...");

	}
	return 0;
}
