#include<stdio.h>
float UD_atof(char* s);
int main(int c, char* s[]){
	char* a = (char*)s[1];
	printf("%f \n",UD_atof(a));
}

float UD_atof(char* s){
	int i=0,j=0,k=0,div=1;
	float sum=0,pt=0;
	for(;s[i];i++){
		if(s[i] == '.')
			break;
	}
	
	for(j=0;j<i;j++){
		if(s[j]>='0' &&  s[j]<='9'){
			sum = sum*10+(s[j]-48);
		}
		
	}
	

	for(k=i+1;s[k];k++){
		pt=pt*10+(s[k]-48);
		div=div*10;
	}
	pt=pt/div;
	sum = sum+pt;
	return sum;
}
