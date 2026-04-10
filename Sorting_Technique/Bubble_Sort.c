#include<stdio.h>
int main(){
	int a[5], temp, n = sizeof(a)/sizeof(int);

	printf("ENTER THE NUMBERS IN ARRAY OF SIZE 5 : ");
	for(int i=0; i<n; i++){
		printf("FOR INDEX %d : ",i);
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");
}
