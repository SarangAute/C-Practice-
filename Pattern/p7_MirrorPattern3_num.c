#include<stdio.h>
int main(){
	int n,l;
	printf("ENTER THE NUMBER OF ROWS TILL MID : ");
	scanf("%d",&n);

	for(int i=-n; i<=n; i++){
		if(i<0)
			l=-i;
		else
			l=i;
		for(int s=0; s<l; s++)
			printf("  ");
		for(int j=0; j<(2*(n-l)+1); j++)
			printf("%d ",j+1);
		printf("\n");
	}
}

/*
  OUTPUT 


          1 
        1 2 3 
      1 2 3 4 5 
    1 2 3 4 5 6 7 
  1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 11 
  1 2 3 4 5 6 7 8 9 
    1 2 3 4 5 6 7 
      1 2 3 4 5 
        1 2 3 
          1 
 
 

		*/
