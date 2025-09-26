#include<stdio.h>
int main(){
	char ch;
	printf("ENTER THE CHARACTER TO CONVERT IN OPPOSITE CASE : \n");
	scanf(" %c",&ch);

	if(ch>65 && ch<90){
		printf("AFTER CONVERSION : %c\n", ch+ 32);
	}
	if(ch>97 && ch< 122){
		printf("AFTER CONVERSION : %c\n", ch-32);
	}
	else {printf("ENTERED WRONG INPUT...\n");
	}
}
