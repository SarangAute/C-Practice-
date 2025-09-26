#include<stdio.h>
int main(){
	int a,b,op;
	printf("ENTER TWO NUMBERS TO SWAP : \n");
	scanf("%d%d", &a,&b);
	printf("VALUES BEFORE SWAPPING : A = %d AND B = %d\n",a,b);

	printf("ENTER THE CHOICE: \n	1.SOLUTION USING ADDITION AND SUBSTRACTION \n	2.SOLUTION USING MULTIPLICATION AND DIVISION \n	3.EXIT... ");
	scanf("%d",&op);
	switch(op){
		case 1:{
			a+=b;
			b=a-b;
			a-=b;
	
			printf("VALUES AFTER SWAPPING (+-) : A = %d AND B = %d\n", a,b);
		       }

		case 2:{
		       a*=b;
		       b=a/b;
		       a/=b;
			printf("VALUES AFTER SWAPPING (*/) : A = %d AND B = %d\n", a,b);
		       }

		case 3: return 0;

		default: printf("ENTERED WRONG CHOICE.....");

	}
}
