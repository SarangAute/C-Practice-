#include<stdio.h>
int main(){
	int n, f1=0, f2=1, temp, i=0;
	printf("ENTER THE NUMBER OF TERMS TO PRINT : ");
	scanf("%d",&n);

	while(i<n){
		temp = f1+f2;
		printf("%d ",f1);
		f1=f2;
		f2=temp;
		i++;
	}
	printf("\n");
}
