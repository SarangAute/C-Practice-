#include<stdio.h>
int main(){
	int num, i=(sizeof(num)*8)-1;
	printf("ENTER THE NUMBER TO PRINT ITS BINARY FORMAT : ");
	scanf("%d",&num);


	for(i ; i>=0; i--){
		printf("%d",(num>>i)&1);
	}

	printf("\n");
}
