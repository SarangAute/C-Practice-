#include<stdio.h>
int main(){
	char s[20];
	printf("ENTER THE STRING: \n");
	scanf(" %[^\n]",s);

	int temp;
	for(int i=0;s[i]; i++){
		for(int j=i+1; s[j]; j++){
			if(s[i]>s[j]){
				temp=s[j];
				s[j] = s[i];
				s[i] = temp;
			}
		}
	}
	printf("%s\n",s);
	for(int i=0;s[i];i++){
		int count = 0;
		for(int j=i;s[j];j++){
			if(s[i]==s[j])
				count++;
		}
		printf("%c = %d \n",s[i],count);
		i=i+count-1;
	}
}
