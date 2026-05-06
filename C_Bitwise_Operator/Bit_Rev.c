#include<stdio.h>

void bits(unsigned int n){
	for(int i=3; i>=0; i--){
		unsigned char byte = (n>>(i*8))&0xff;
		for(int j=7;j>=0;j--){
			printf("%d",(byte>>j)&1);
		}
		printf(" ");
	}
}
void rev(unsigned int n){
	unsigned int rev=0;
	for(int i=0;i<32;i++){
		rev <<= 1;
		rev |= (n&1);
		n >>= 1;
	}
	printf("REVERSED BITS: \n");
	bits(rev);
}

int main(){
	int num = 0;
	printf("ENTER NUMBER : ");
	scanf("%d",&num);

	bits(num);
	printf("\n");
	rev(num);
}
