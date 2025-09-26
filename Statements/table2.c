#include<stdio.h>
int main(){
	int num1,num2, count=1;
	printf("ENTER THE TWO NUMBER FOR TABLE: \n");
	scanf("%d%d",&num1,&num2);

table:
	printf("%d * %d = %d \t %d *%d = %d\n", num1, count,num1*count,num2,count,num2*count);
	count++;

	if(count<=10)
	goto table;
	return 0;
}
