#include<stdio.h>
int main(){
	int num, digit, even=0, odd=0;
	printf("ENTER A NUMBER TO COUNT EVEN AND ODD NUMBERS IN A NUMBER: ");
	scanf("%d",&num);

	while(num!=0){
		digit = num%10;
		if(digit%2==0)
			even++;
		else 
			odd++;
		num/=10;
	}
	printf("EVEN: %d    ODD: %d\n",even,odd);
}
