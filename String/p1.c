#include<stdio.h>
int main(){
	int x;
	char s[20];
	printf("ENTER THE INTEGER : \n");
	scanf("%d",&x);

	printf("ENTER THE STRING \n");
	//scanf("%s",s);              cannot display string after space
	scanf(" %[^\n]",s);

	printf("x = %d \n",x);
	printf("s = %s \n",s);
}
