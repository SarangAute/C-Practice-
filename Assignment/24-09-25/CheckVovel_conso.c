#include<stdio.h>
int main(){
	char ch;
	printf("ENTER THE CHARACTER: ");
	scanf(" %c",&ch);

	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
		printf("ENTERED CHARACTER IS VOVEL..");
	else
		printf("ENTERED CHARACTER IS CONSONANT...");
}
