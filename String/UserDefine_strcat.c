#include<stdio.h>

char* UDstrcat(char* dest, const char* scr){
	int i, s;
	for(s=0; dest[s]; s++);
	for(i=0; dest[s+i] = scr[i]; i++);
	
	return dest;
}

int main(){
	char dest[40], scr[40];

	printf("ENTER THE DESTINATION STRING : \n");
	scanf(" %[^\n]",dest);

	printf("ENETR THE SOURCE STRING : \n");
	scanf(" %[^\n]",scr);

	UDstrcat(dest, scr);
	printf("SOURCE : %s \n",scr);
	printf("AFTER strcat(); .........\n");
	printf("%s \n",dest);
}
