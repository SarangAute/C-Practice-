#include<stdio.h>
int main(){
	int pos, n, a[] = {10,20,30,40,50};
	n = sizeof(a)/sizeof a[0];
	for(int i=0 ; i<n; i++)
		printf("POS = %d \n ELEMRNT = %d \n",i, a[i]);
	
	printf("ENTER THE ELEMENT POS TO DELETE : \n");
	scanf("%d",&pos);

	for(int i = pos; i<n; i++)
		a[i] = a[i+1];
	
       	n--;
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);

}
