#include<stdio.h>
int main(){
	char ch;
	do{
		printf("HELLO \n");
		printf("Do you want to print hello again ? \n");
		scanf(" %c",&ch);
	}while((ch == 'y') || (ch == 'Y'));
}
