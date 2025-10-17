#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		for(int j=-n+1; j<n; j++){
		if((j>-(n-1-i)) && (j<(n-i-1)))
			printf("  ");
		else
			printf("* ");
		}
		printf("\n");
	}
}
