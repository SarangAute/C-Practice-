#include<stdio.h>
int main(){
	char ch, op;
	do{
		printf("ENTER CHARACTER TO INTERCHANGE ITS CASE : ");
		scanf(" %c",&ch);
		printf("ENTERED CHARACTER IS %c \n", ch);
		
		ch ^= 32;
		printf("CHANGED CHARACTER IS %c \n", ch);
		printf("DO YOU WANT TO CHECK ANOTHER ALPHABET...");
		scanf(" %c",&op);
	}while(op == 'y' || op == 'Y');
}
