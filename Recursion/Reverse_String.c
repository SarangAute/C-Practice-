#include<stdio.h>

void fun(char*);
int main(){
	fun("HELLO");
	printf("\n");
}

void fun(char* p){
	if(*p){
		fun(p+1);
		printf("%c",*p);
	}
}
