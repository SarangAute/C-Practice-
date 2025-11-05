#include<stdio.h>
#include<string.h>

char* RemoveNonAlph(char* s);
char* ConvertUppCase(char* s);
char* SortStr(char* s);
int main(){
	char s1[40], s2[40];
	printf("ENTER THE STRING 1: \n");
	scanf(" %[^\n]",s1);
	RemoveNonAlph(s1);

	printf("ENTER THE STRING 2: \n");
	scanf(" %[^\n]",s2);
	RemoveNonAlph(s2);

	if(strlen(s1) != strlen(s2)){
		printf("THE STRING IS NOT AN ANAGRAM.....\n");
		return 0;
	}
	ConvertUppCase(s1);
	ConvertUppCase(s2);
	SortStr(s1);
	SortStr(s2);

	if(strcmp(s1,s2) == 0){
		printf("THE STRING IS ANAGRAM...\n");
	} 
}

char* RemoveNonAlph(char* s){
	int i,j;
	for(i=0;s[i];i++){
		if(!((s[i]>='a' && s[i]<+'z') || (s[i]>='A' && s[i]<='Z'))){
			for(j=i; s[j];j++)
				s[j] = s[j+1];
			i--;
		}
	}
	return s;
}

char* ConvertUppCase(char* s){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
	}
	return s;
}

char* SortStr(char* s){
	int i,j,temp;
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i]>s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;	
			}
		}
	}
	return s;
}
