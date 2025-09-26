#include<stdio.h>
int main(){
	int num, count=1;
	printf("ENTER THE NUMBER FOR TABLE: \n");
	scanf("%d",&num);

table:
	printf("%d * %d = %d\n", num, count,num*count);
	count++;

	if(count<=10)
	goto table;
	return 0;
}
