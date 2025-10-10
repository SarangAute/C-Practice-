#include<stdio.h>
int main(){
	char ch = 'A';
	int i=0;
	do{
		printf(" %c \n",ch);
	}while(( ++i <= 5) || (ch ++ <= 'F'));

	printf("%d \n",i);
}
