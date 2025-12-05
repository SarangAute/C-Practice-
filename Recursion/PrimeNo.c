#include<stdio.h>
void prime(int,int,int);
int main(){
	for(int i=2;i<1000;i++)
		prime(i,0,2);
	printf("\n");
}

void prime(int n, int count, int i){
	if(i<=n/2){
		if(n%i==0)
			count++;
		i++;
		prime(n,count,i);
	}
	else
		if(count == 0)
			printf("%d ",n);	
}
