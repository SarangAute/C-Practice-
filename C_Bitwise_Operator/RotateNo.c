#include<stdio.h>

void RightShift(int n, int d, int s);
void LeftShift(int n, int d, int s);
void Binary(int num, int s);

int main(){
	int num, Nr, op, s;

	printf("ENTER THE NUMBER : ");
	scanf("%d",&num);
	s= sizeof(num)*8;
	Binary(num,s);
	printf("ENTER THE NUMBER OF TIMES YOU WANT TO ROTATE : ");
	scanf("%d",&Nr);

	printf("ENTER YOUR CHOICE:\n 1:RIGHT SIDE ROTATE\n 2:LEFT SIDE ROTATE\n");
	scanf("%d",&op);
	switch(op){
		case 1 : RightShift (num,Nr,s);
			 break;

		case 2 : LeftShift (num,Nr,s);
			 break;

		default : printf("ENTERED WRONG CHOICE.....");
			  return 0;
	}
}

void RightShift(int n, int d, int s){
	int no = ((n>>d) | (n << (s-d))) & 0xffffffff;
	Binary(no,s);
}

void LeftShift(int n, int d, int s){
	int no = ((n<<d)|(n>>(s-d))) & 0xffffffff;
	Binary(no,s);
}

void Binary(int num, int s){
	for(int i=(s-1); i>=0; i--){
		printf("%d",(num>>i)&1);
	}
	printf("\n");
}
