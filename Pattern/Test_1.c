#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE ROWS FOR PATTERN : \n");
	scanf("%d",&n);

	int i,j,s;
	for(i=0;i<n;i++){
		for(s=0;s<n-1;s++){
			if(i<n-1)
				printf("  ");
		}
		for(j=0;j<n-s;j++){
			if(i>=n-1){
				for(int k=0; k<n; k++)
					printf("* ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
}
