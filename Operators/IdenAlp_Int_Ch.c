#include<stdio.h>
int main(){
	char ch;
	
	printf("ENTER ANY KEY TO IDENTIFY ITS TYPE : \n");
	scanf(" %c",&ch);
	if(ch>'a' && ch<'z'){
		printf("THIS IS LOWERCASE ALPHABETS \n");
	}
	if(ch>'A' && ch<'Z'){
		printf("THIS IS UPPERCASE ALPHABET \n");
	}
	if(ch>48 && ch<57){
		printf("THIS IS INTEGER \n");
	}
	if(ch>33 && ch<47){
		printf("THIS IS SPECIAL CHARACTERS  \n");
	}else{
		printf("WRONG INPUT...");
	}
	return 0;
}
