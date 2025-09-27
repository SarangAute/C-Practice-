#include<stdio.h>
int main(){
	int x=10;
	int *p=10;

	printf("p=%p \n",p);		//0xa
	printf("*p = %d \n", *p);	// SEGMENTATION FAULT
}
