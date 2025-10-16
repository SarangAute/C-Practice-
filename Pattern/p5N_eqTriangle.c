#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS TO PRINT : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int s=0; s<(n-i-1); s++)
			printf("  ");
		for(int j=0; j<(2*i+1); j++)
			printf("%d ",j+1);
		printf("\n");
	}
}

/*
     OUTPUT FOR N = 5

        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 


*/
