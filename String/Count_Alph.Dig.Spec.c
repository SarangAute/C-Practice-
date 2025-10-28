#include<stdio.h>
int main(){
	char s[25];
	int CAlp=0, CDig=0, CSpec=0;
	printf("ENTER THE STRING : \n");
	scanf(" %[^\n]",s);

	for(int i=0; s[i]!=0; i++){
		if('A'<= s[i] && s[i]<='Z')
			CAlp++;
		
		else if('a'<= s[i] && s[i]<='z')
			CAlp++;

		else if('0'<= s[i] && s[i]<='9')
			CDig++;

		else
			CSpec++;
	}

	printf("ALPHABET : %d \nDIGITS : %d  \nSPECIAL CHARACTER : %d \n",CAlp,CDig,CSpec);
}
