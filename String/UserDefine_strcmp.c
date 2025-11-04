#include<stdio.h>
int UDstrcmp(const char* s1, const char* s2){
	int i;
	for(i=0; s1[i] == s2[i]; i++){
		if(s1[i] == '\0' || s2[i]== '\0' )
			break;
	}
	
	return s1[i]-s2[i];
}
int main(){
	char s1[40], s2[40];
	printf("ENTER THE STRING 1 : \n");
	scanf(" %[^\n]", s1);

	printf("ENTER THE STRING 2 : \n");
	scanf(" %[^\n]", s2);

	int result = UDstrcmp(s1,s2);

	if(result == 0)
		printf("STRING 1 AND STRING 2 ARE EQUAL  \n");
	else if(result < 0)
		printf("STRING 1 IS SMALLER THEN STRING 2 \n");
	else 
		printf("STRING 1 IS GREATER THEN STRING 2 \n");
}
