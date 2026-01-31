#include<stdio.h>

float UD_atof (char*);
int main(int c, char* s[]){
	char* a= (char*)s[1];
	printf("%f \n",UD_atof(a));
}

float UD_atof (char*s){
	int i=0,j=0,sum=0;
	float num=0,div=1;

	if(s[0] == '-' || s[0] == '+')
		i=1;
	for(i;s[i]!='.';i++){
                if(s[i]>='0' && s[i]<='9')
			sum = sum * 10 +(s[i] - '0');
	}
	for(j=i+1;s[j];j++){
		div = div*10;
		num = num +((s[j]-'0')/div);
	}
	if(s[0]=='-')
		sum=-sum;
	
	return sum+num;
}
