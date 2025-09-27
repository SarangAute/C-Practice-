#include<stdio.h>
int main(){
	int num, start, end, temp, digit, fact, sum;
	printf("ENTER THE RANGE TO CHECK STRONG NUMBERS : ");
	scanf("%d%d",&start,&end);

	for(int num=start; num<=end; num++){
		temp = num;
		sum = 0;
		while(temp!=0){
			digit = temp%10;
			fact = 1;
			for(int i=digit; i>=1; i--){
				fact *=i;
			}
			sum += fact;
			temp /=10;
		}
		if(num == sum)
			printf("%d ",sum);
	}
	printf("\n");
}
