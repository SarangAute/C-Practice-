#include<stdio.h>

int main(){
	char ch;
	int op, ascii;
	printf("1. A-Z & a-z \n2.ASCII TO CHAR  \n3.CHAR TO ASCII\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			for(ch='A';ch<='Z';ch++){
				printf("%c = %d\n",ch,ch);
			}
			for(ch='a';ch<='z';ch++){
				printf("%c = %d\n",ch,ch);
			}
		break;

		case 2: 
			printf("ENTER THE ASCII VALUE TO PRINT CHAR : \n");
			scanf("%d",&ascii);
			printf("%c\n",ascii);
			break;

		case 3:
			printf("ENTER THE CHAR TO PRINT ASCII VALUE: \n");
			scanf(" %c",&ch);
			printf("%d\n",ch);
			break;

		default : 
			printf("ENTER WRONG CHOICE...\n");

	}
	return 0;
}
