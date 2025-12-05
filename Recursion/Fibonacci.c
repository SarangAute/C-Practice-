#include<stdio.h>
void fibo(int,int,int);
int main(){
	int n;
	printf("ENTER THE RANGE FOR FIBO SERIES: \n");
	scanf("%d",&n);
	fibo(n,0,1);
	printf("\n");
}

void fibo(int n,int f1, int f2){
	int temp;
	if(f1 < n){
		printf("%d ",f1);
		//temp = f1+f2
		//f1 = f2;
		//f2 = temp;
		fibo(n,f2,f1+f2);
	}	
}
