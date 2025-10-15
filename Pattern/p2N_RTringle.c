#include<stdio.h>
int main(){
	int n, k;
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		if(i%2==0)
			k=1;
		else 
			k=2;
		for(int j=0; j<i+1; j++){
		printf("%d ",k);
		k+=2;
		}
		printf("\n");
	}
}
