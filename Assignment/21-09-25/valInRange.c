#include<stdio.h>
int main(){
	int a,b;
	printf("ENTER THE TOW NUMBERS TO PRINT THE RANGE: ");
	scanf("%d%d",&a,&b);

	if (a<b){
		while(a<=b){
			printf("%d ", a);
			a++;
		}
	}
	//if(a>b){
	else{
		while (a>=b){
			printf("%d ",a);
			a--;
		}
	}
}
