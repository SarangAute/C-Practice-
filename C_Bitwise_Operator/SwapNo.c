#include<stdio.h>
int main(){
	int x, y;
	printf("WELCOME TO BITWISE PROGRAM \n");
	printf("ENTER TWO NUMBERS TO SWAP : ");
	scanf("%d%d",&x,&y);
	printf("BEFORE SWAPPING : \n	X: %d   Y: %d \n", x,y);
	x^=y;
	y=x^y;
	x^=y;
	printf("AFTER SWAPPING : \n	X: %d   Y: %d \n", x,y);
}
