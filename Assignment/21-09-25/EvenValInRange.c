#include<stdio.h>
int main(){
	int a,b;
	printf("ENTER RANGE OF THE EVEN NUMBERS: ");
	scanf("%d%d",&a,&b);

	if(a<=b){
		while(a<=b){
		if(a%2==0)
			printf("%d ",a);
		a++;
		}
	}
	if(a>=b){
		while(a>=b){
			if(a%2==0)
				printf("%d ",a);
			a--;
		}
	}
}
