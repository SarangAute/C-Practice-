#include<stdio.h>
int main(){
	int num, digit, rev=0;
	printf("ENTER THE NUMBER TO REVERSE IT : ");
	scanf("%d",&num);

	while(num!=0){
		digit = num%10;
		printf("reverse of the given number is : %d \n",digit); //temporary stores the value
		num /= 10;
		rev = rev*10 + digit;
	}
	printf("REVERSE OF A GIVEN NUMBER IS : %d\n",rev);
}
