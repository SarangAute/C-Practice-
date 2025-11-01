#include<stdio.h>
void fun(char*);
int main(){
	char a[]= "vector";
	fun(a);
	printf(" a = %s \n",a);
}

void fun(char* p){
	p[0] = 'S';
	printf("IN FUN(), P = %s \n",p);
}
