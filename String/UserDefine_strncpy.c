#include<stdio.h>
char* UDstrncpy(char* dest, const char* scr, int n){
	int i;

	for(i=0; (dest[i] = scr[i])&&(i<n) ; i++);
		dest[i] = '\0';
	return dest;
}

int main(){
	char dest[40], scr[40];
	int n;
	printf("ENTER THE SOURCE STRING : \n");
	scanf(" %[^\n]",scr);

	printf("ENTER THE Nth NUMBER OF TERM TO COPY FROM SOURCE TO DESTINATON : \n");
	scanf("%d",&n);
	UDstrncpy(dest, scr, n);

	printf("SOURCE : %s \n",scr);
	printf("DESTINATION : %s \n",dest);
}
