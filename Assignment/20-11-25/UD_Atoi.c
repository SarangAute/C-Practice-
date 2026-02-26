#include<stdio.h>
int UD_atoi(char*);
int main(int c, char *s[]){
	char* a =(char*) s[1];
	printf("%d \n",UD_atoi(a));
}

int UD_atoi(char* s){
	int i=0,sum=0;
	if(s[0] == '-' || s[i] == '+')
		i=1;
	for(i;s[i];i++){
		if(s[i]>=48 && s[i]<=57)
			sum =sum*10 +(s[i]-48);
	}

	if(s[0] == '-')
		sum= -sum;
	return sum;
}
