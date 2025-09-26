#include<stdio.h>
int main(){
	int a,b;
	printf("ENTER THE VALUE OF A AND B: \n");
	scanf("%d%d",&a,&b);
	printf("WE WILL BE PERFORMING DIVISION FOR THIS TWO NUMBERS...\n");
	printf("BEFORE TYPECASTING RESULT WILL BE : %d\n",a/b);
	printf("AFTER TYPECASTING RESULT WILL BE : %f\n",(float)a/b);

	printf("\nHERE TYPE CASTING MEANS TEMPORARILY CHANGING OF ONE LOWER DATATYPE IN ANOTHER GREATER DATATYPE FORM \n SIMPLY: INT->FLOAT \n 	FLOAT -> DOUBLE OR LONG Etc......\n");
	return 0;
}
