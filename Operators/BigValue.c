#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER THE THREE NUMBERS TO COMPARE : \n");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a>c){
		printf("A VALUE IS GREATER : %d\n", a);
	}else if(b>c && b>a){
		printf("B VALUE IS GREATER : %d\n", b);
	}else if(c>b && c>a){
		printf("C VALUE IS GREATER : %d\n", c);
	}else if((a==b) && (a>c)){
		printf("A:%d AND B:%d ARE GREATER THEN C:%d \n",a,b,c);
	}else if((a==c) && (a>b)){
		printf("A:%d AND C:%d ARE GREATER THEN B:%d \n",a,c,b);
	}else if((b==c) && (b>a)){
		printf("C:%d AND B:%d ARE GREATER THEN A:%d \n",c,b,a);
	}else if((a==b) && (b==c)){
		printf("A:%d, B:%d AND C:%d ALL ARE EQUAL \n",a,b,c);
	}
	return 0;
}
