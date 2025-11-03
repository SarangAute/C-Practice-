#include<stdio.h>
char* UDstrcpy(char* dest, const char* scr){
	int i;
/*	for(i=0; scr[i]; i++){
		if(i>=n)
			dest[i] = '\0';
		else
			dest[i] = scr [i];
	}*/

	for(i=0; (dest[i] = scr[i]) ; i++);
		
	return dest;
}

int main(){
	char dest[40], scr[40];
	printf("ENTER THE SOURCE STRING : \n");
	scanf(" %[^\n]",scr);

	UDstrcpy(dest, scr);

	printf("SOURCE : %s \n",scr);
	printf("DESTINATION : %s \n",dest);
}
