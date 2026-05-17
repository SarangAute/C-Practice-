#include<stdio.h>
#include<stdlib.h>

int Total_Toys(int *arr,int n, int t){
	int count=0;
	for(int i=0; i<n; i++){
		t-=arr[i];
		if(t>=0)
			count++;
		else
			break;
	}
	return count;
}

int main(){
	int n=0, t=0;
	printf("ENTER NUMBER OF SHOPS: ");
	scanf("%d",&n);

	printf("ENTER TOTAL TIME: ");
	scanf("%d",&t);

	int *arr = (int*)malloc(n*sizeof(int));
	printf("ENTER WAITING TIME PERIOD PER SHOP: \n");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	printf("OUTPUT : %d\n",Total_Toys(arr,n,t));
}
