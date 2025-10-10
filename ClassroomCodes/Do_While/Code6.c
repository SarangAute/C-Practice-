#include<stdio.h>
int main(){
	char c , a=10;
	do{
		++a;
	}while(c=a*a);

	printf("%d %d \n",a,c);
}
/*  char range = -128 to 127
 a=	11	12	13	14	15	16
	11*11   12*12   13*13   14*14   15*15   16*16
 c=	121	144	169	196	225	256     at 256 1st 8 bites are 0 hence c = 0
	*/
