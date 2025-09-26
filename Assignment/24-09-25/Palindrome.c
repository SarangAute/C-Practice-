#include<stdio.h>
int main(){
	int num, rev=0, temp;

	printf("ENTER THE NUMBER TO CHECK PALINDROME : ");
	scanf("%d",&num);
	temp= num;
	while(num!=0){
		rev= rev*10 + num%10;
		num/=10;
	}

	if(temp==rev)
		printf("PALINDROME NUMBER....\n");
	else
		printf("NOT A PALINDROME NUMBER....\n");
}
