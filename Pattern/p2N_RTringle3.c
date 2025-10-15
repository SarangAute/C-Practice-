#include<stdio.h>
int main(){
	int n;
	printf("ENTERR THE NUMBER OF ROWS: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		int val = i;
		for(int j=1; j<=i; j++){
			printf("%d ",val);
			val += (n-j);
		}
		printf("\n");
	}
}
