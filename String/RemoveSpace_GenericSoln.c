#include<stdio.h>
void SkipSpace(char *);
int main(){
    char s[40];
    printf("ENTER THE STRING : \n");
    scanf(" %[^\n]",s);
    printf("THE STRING YOU ENTERED : %s \n",s);
    SkipSpace(s);
    printf("AFTER REMOVING SPACES : %s \n",s);
}

void SkipSpace(char* s){
	int index;
	for(int i=0; s[i]; i++){
		if(s[i] == ' '){
			index = i;
			for (int j=index ;s[j];j++){
			s[j] = s[j+1];
			}
			i--;
		}
	}	
}
