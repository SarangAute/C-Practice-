#include<stdio.h>
int main(){
	char s[40];
	int start,end,size,temp;

	printf("ENTER THE STRING : \n");
	scanf(" %[^\n]",s);

	start =0 ;
	for(size =0; s[size]; size++);  //length od string 

	for(int i=0; i<=size; i++){
		if(s[i] == ' ' || s[i] == '\0'){
			end = i-1;
			for(int j = 0; start<end; start++){
				temp = s[start];
				s[start] = s[end];
				s[end] = temp;
				end--;
			}
			start = i+1;
		}
	}	
	printf("%s \n",s);

	for(int i=size-1; i>=0;i--){
		printf("%c",s[i]);
	}
	printf("\n");
}
