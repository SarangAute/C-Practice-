
#include<stdio.h>
int UDstrncmp(char* s1, char* s2, int n){
	int i;
	for(i=0; i<=n; i++){
		if((s1[i] != s2[i]) || s1[i] == '\0' || s2[i]== '\0' )
			break;
	}
	--i;
	return s1[i]-s2[i];
}
int main(){
	char s1[40], s2[40];
	int n;
	printf("ENTER THE STRING 1 : \n");
	scanf("%[^\n]", s1);

	printf("ENTER THE STRING 2 : \n");
	scanf(" %[^\n]", s2);

	printf("ENTER THE Nth NUMBER TILL THAT IT WILL COMPARE A STRING : \n");
	scanf("%d",&n);

	int result = UDstrncmp(s1,s2,n);

	if(result == 0)
		printf("STRING 1 AND STRING 2 ARE EQUAL  \n");
	else if(result < 0)
		printf("STRING 1 IS SMALLER THEN STRING 2 \n");
	else 
		printf("STRING 1 IS GREATER THEN STRING 2 \n");
}
