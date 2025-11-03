#include<stdio.h>

char* UDstrcat(char* dest, const char* scr, int n){
	int i, s;
	for(s=0; dest[s]; s++);
	for(i=0; (dest[s+i] = scr[i]) && i<n; i++);
		dest[s+i] = '\0';
	
	return dest;
}

int main(){
	char dest[40], scr[40];
	int n;

	printf("ENTER THE DESTINATION STRING : \n");
	scanf(" %[^\n]",dest);

	printf("ENETR THE SOURCE STRING : \n");
	scanf(" %[^\n]",scr);

	printf("SOURCE : %s \n",scr);
	printf("ENTER THE Nth TERM TO CONCAT FROM SOURCE TO DESTINATION STRING : \n");
	scanf("%d",&n);

	UDstrcat(dest, scr, n);
	printf("AFTER strcat(); .........\n");
	printf("%s \n",dest);
}
