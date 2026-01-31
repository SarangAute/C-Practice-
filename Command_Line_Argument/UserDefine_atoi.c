#include<stdio.h>
int UD_atoi(char* s){
	int i=0, sum=0;
	if((s[0]=='-') || (s[0]=='+'))
		i=1;
	for(i;s[i];i++){
		if(s[i]>='0' && s[i]<='9')
			sum=sum*10+(s[i]-'0');
	}
	if(s[0]=='-')
		return -sum;
	return sum;
}

int main(int argc,char* s[]){
	if(argc<1){
		printf("usage: ./a.out float_value \n");
		return;
	}

	char* a = (char*)s[1];
	printf("%d \n",UD_atoi(a));
}
