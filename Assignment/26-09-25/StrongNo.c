#include<stdio.h>
int main(){
	int num, temp, digit, fact, sum=0;
	printf("ENTER THE NUMBER TO CHECK STRONG NUMBER : ");
	scanf("%d",&num);

	temp = num;

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
		printf("STRONG NUMBER....\n");
	else
		printf("NOT A STRONG NUMBER...\n");
}
