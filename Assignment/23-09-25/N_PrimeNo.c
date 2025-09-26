#include<stdio.h>
int main(){
	int num, count;
	printf("ENTER THE Nth TERM OF PRIME NUMBER : ");
	scanf("%d",&num);

	if(num>1){
		for(int i=1; i<=num; i++){
			count=0;
			for(int j=1; j<=i; j++){
				if(i%j==0)
					count++;
			}
			if(count==2){
				printf("%d ",i);
			}
		}
		printf("\n");
	}else
		printf("VALUE ENTERED LESS THEN 1 ** INVALID **\n");
}
