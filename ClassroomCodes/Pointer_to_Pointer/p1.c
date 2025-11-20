#include<stdio.h>
int main(){
	int x=10;
	int *p=&x;
	int **ptr = &p;
	int ***p3 = &ptr;

	printf("x=%d  *p=%d  **ptr=%d   ***p3=%d\n" ,x,*p,**ptr,***p3);
	printf("&x=%p  p=%p  *ptr=%p   **p3=%p\n" ,&x,p,*ptr,**p3);
	printf("&p=%p  ptr=%p   *p3=%p\n" ,&p,ptr,*p3);
	printf("&ptr=%p   p3=%p\n" ,&ptr,p3);

}
