#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j%2==0)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	printf("\n");

//OR
	for(int i=0; i<n; i++){
		int k=1;
		for(int j=0; j<(i+1); j++){
		printf("%d ",k);
		k=!k;
		}
		printf("\n");
	}
}
