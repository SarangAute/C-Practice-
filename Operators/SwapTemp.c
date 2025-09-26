#include<stdio.h>
int main(){
	int a, b, temp;
	printf("ENTER THE TWO NUMBERS A AND B TO SWAP:  \n");
	scanf("%d%d",&a,&b);

	printf("THE VALUE BEFORE SWAPPING IS : a = %d AND b = %d \n", a,b);
	temp = a;
	a= b;
	b= temp;

	printf("THE VALUES AFTER SWAPPING ARE : a = %d AND b = %d \n", a,b);
	return 0;
}
