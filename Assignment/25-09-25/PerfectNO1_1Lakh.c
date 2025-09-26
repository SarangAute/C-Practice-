#include<stdio.h>
int main(){
	int start, end,num ;
	printf("PROVIDE START AND END OF THE RANGE: ");
	scanf("%d%d",&start,&end);
	for(num=start; num<=end; num++){
		int sum = 0;
		for(int i=1; i<num; i++){
			if(num%i==0)
			sum+=i;
		}
		if(sum==num)
			printf("%d ",sum);
	}
}
