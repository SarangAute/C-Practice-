#include<stdio.h>
int main(){
	int num, count=0;
	printf("ENTER THE NUMBER TO CHECK IT IS A PRIME OR NOT: ");
	scanf("%d",&num);
	if(num>1){
		for(int i=num; i>0; i--){
			if(num%i==0)
				count++;
		}
		if(count==2){
			printf("%d IS A PRIME NUMBER...\n",num);
		}
		else{
		printf("%d IS NOT A PRIME NUMBER...\n",num);
		}
	}else
		printf("%d IS NOT A PRIME NUMBER \n",num);
}
