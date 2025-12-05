#include<stdio.h>
int SumOfNum(int,int);
int main(){
	int n;
	printf("ENTER THE NUMBER : \n");
	scanf("%d",&n);
	int sum = SumOfNum(n,0);
	printf("%d = %d\n",n,sum);
}

int SumOfNum(int n,int sum){
	if(n!=0){
		//sum =sum + (n%10);
		//n=n/10;
		SumOfNum(n/10,sum+(n%10));
	}
	else
		return sum;
}
