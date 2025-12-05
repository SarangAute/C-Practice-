#include<stdio.h>
int fact(int);
int main(){
	int n,f;
	printf("ENTER THE NUMBER FOR FACTORIAL : \n");
	scanf("%d",&n);
	f=fact(n);
	printf("%d! = %d\n",n,f);
}

int fact (int n){
	if((n==1)||(n==0))
		return 1;
	else
		return n*fact(n-1);
}
