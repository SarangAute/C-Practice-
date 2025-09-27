#include<stdio.h>
int main(){
	int n,f1=0,f2=1,temp;
	printf("ENTER A NUMBER TILL YOU WANT TO PRINT FIBONACCI SERIES : ");
	scanf("%d",&n);

	while(f1<=n){
		temp=f1+f2;
		printf("%d ",f1);
		f1 = f2;
		f2 = temp;
	}
	printf("\n");
}
