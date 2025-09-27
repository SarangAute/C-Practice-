#include<stdio.h>
int main(){
	int x=10;
	int *p = &x;

	printf("x=%d  *p=%d \n",x,*p);
	printf("&x=%p  p=%p\n", &x,p);
	printf("&p=%p\n",&p);

	//x=20;
	//*p=20;
	
	printf("x=%d  *p=%d \n",x,*p);
	printf("&x=%p  p=%p\n", &x,p);
}
