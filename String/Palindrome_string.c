#include<stdio.h>
#include<string.h>

int main(){
	char s[20], S[20], temp;
	printf("ENTER THE STRING TO CHECK WEATHER IS IT PALINDROME OR NOT: ");
	scanf(" %[^\n]", s);

	int i;
	for(i=0; s[i] != 0; i++);
	
	strcpy(S,s);
	for(int j=0; j<i/2; j++){
		temp = S[j];
		S[j] = S[i-j-1];
		S[i-j-1] = temp;
	}

	printf("%s",S);
	printf("\n");

	for(int j=0; s[j]!=0; j++){
		if(s[j]!=S[j]){
			printf("not a palindrome ...\n");
			return 0;
		}
	}
	printf("PALINDROME \n");
	
}
