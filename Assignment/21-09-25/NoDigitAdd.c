#include<stdio.h>
int main(){
	int num, count=0, sum=0;
	printf("ENTER THE NUM TO TAKE ITS DIGIT SUM : ");
	scanf("%d",&num);

	while(num!=0){
		sum+=num%10;
		num/=10;
		count++;
	}

	printf("TOTAL NUMBER OF DIGITS IN NUMBER ARE : %d\n", count);
	printf("SUM OF EACH DIGIT IS: %d\n",sum);
	return 0;
}
