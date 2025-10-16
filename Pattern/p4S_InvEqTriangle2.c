#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int s=0; s<i; s++)
			printf("  ");		// PROVIDED 2 SPACES AND PATTERN CHANGED 
		for(int j=0; j<(n-i); j++)
			printf("* ");
		printf("\n");
	}
}
/*
 OUTPUT
* * * * *               
 * * * *
  * * *			single space in s for loop
   * *
    *

    TO


* * * * * 
  * * * * 
    * * * 		double spaces in s for loop
      * * 
        * 

    */
