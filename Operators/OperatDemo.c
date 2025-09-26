#include<stdio.h>

int main(){
	int a,b;
	printf("ENTER THE TWO NUMBERS TO PERFORM THEM IN ALL OPERATORS : \n");
	scanf("%d%d",&a,&b);
	printf("ARITHEMATIC OPERATORS : \n");
	printf("Addition a+b: %d\n",a+b);
	printf("Substraction a-b : %d\n",a-b);
	printf("Multplication a*b: %d\n",a*b);
	printf("Division a/b: %.2f\n",(float)a/b);
	printf("Modulas a Mod b: %d\n",a%b);
	printf("\n");

	printf("INCREMENT AND DECREMENT OPERATORS : \n");
	printf("Pre-increment ++a : %d \n", ++a);
	printf("Post-increment a++ : %d \n", a++);
	printf("Pre-decrement --b : %d \n", --b);
	printf("Post-decrement b-- : %d \n", b--);
	printf("\n");

	printf("RELATIONAL OPERATORS : \n");
	printf("a<b : %d \n", a<b);
	printf("a>b : %d \n", a>b);
	printf("a<=b : %d \n", a<=b);
	printf("a>=b : %d \n", a>=b);
	printf("a==b : %d \n", a==b);
	printf("a!=b : %d \n", a!=b);
	printf("\n");

	printf("LOGICAL OPERATORS : \n");
	printf("a&&b : %d\n", a&&b);
	printf("a||b : %d\n", a||b);
	printf("!a : %d\n", !a);
	printf("\n");

	return 0;
}
