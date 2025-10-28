#include<stdio.h>
int main(){
	int a[5], temp;
	printf("ENTER THE ELEMENTS IN ARRAY : \n");
	for(int i=0; i<5; i++){
		printf("INDEX %d : ",i);
		scanf("%d",&a[i]);
	}

	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(a[i]>a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for(int i=0;i<5;i++)
		printf("%d ",a[i]);
	
	printf("\n");
}
