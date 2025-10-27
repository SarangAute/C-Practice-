#include<stdio.h>
int main(){
	char s[20];
	printf("ENTER THE STRING : ");
	scanf(" %[^\n]",s);

	int vov =0 ,con =0;
	for(int i=0; s[i]!=0; i++){
		switch(s[i]){
			case 'a' : case 'A':
			case 'e' : case 'E':
			case 'i' : case 'I':
			case 'o' : case 'O':
			case 'u' : case 'U': vov++;
					     break;
			default:
				con++;
		}
	}
	printf("VOVELS : %d   CONCONENTS : %d\n",vov,con);
}
