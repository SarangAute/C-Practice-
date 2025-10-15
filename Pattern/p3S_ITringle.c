#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
			printf("* ");
		}
		printf("\n");
	}
}
