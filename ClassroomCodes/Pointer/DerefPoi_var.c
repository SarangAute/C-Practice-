#include<stdio.h>
int main(){
	int a = 87;
	float b = 7.5;
	int *p1 = &a;
	float *p2 = &b;
	
	printf("a = %d  and b = %f  \n", a,b);
	printf("change value of a using pointer *p1 = ");
	scanf("%d",p1);

	printf("change value of b using pointer *p2 = ");
	scanf("%f",p2);
	printf("a = %d  and b = %f  \n",a,b);

	(*p1)+=10;
	//float 
        (*p2)+=10.0;
	printf("(*p1)++ = %d \n",(*p1));
	printf("x= *p2+10 = %f \n",(*p2));
}
