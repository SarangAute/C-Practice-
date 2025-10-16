#include<stdio.h>
int main(){
	int n,l;
	char ch = 'A';
	printf("ENTER THE NUMBER OF ROWS TILL MID : ");
	scanf("%d",&n);

	for(int i=-n; i<=n; i++){
		if(i<0)
			l=-i;
		else
			l=i;
		for(int s=0; s<n-l; s++)
			printf(" ");
		for(int j=0; j<l+1; j++){
		
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}

/*
  OUTPUT 

A B C D E F 
 A B C D E 
  A B C D 
   A B C 
    A B 
     A 
    A B 
   A B C 
  A B C D 
 A B C D E 
A B C D E F 
 

		*/
