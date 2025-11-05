#include<stdio.h>
char* SortStr(char* s){
	int i,j,temp;
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i] > s[j]){
				temp = s[j];
				s[j] = s[i];
				s[i] = temp;
			}
		}
	}
	return s;
}

int main(){
	char s[40];
	printf("ENTER THE STRING : \n");
	scanf(" %[^\n]",s);
	SortStr(s);

	printf("%s \n",s);

}
