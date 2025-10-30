#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE ROWS OF TRIANGLE : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		int num =i+1;
		for(int j=0; j<=i; j++){
			printf("%d ",num);
			num+=i+1;
		}
		printf("\n");
	}
}
