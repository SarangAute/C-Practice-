#include<stdio.h>
void fun(char*);
int main(){
	fun("vector");
}
void fun(char* p){
	//p[0] = 'V';	{Segmentation fault (core dumped)}
	printf("IN FUN(), P = %s \n",p);
}
