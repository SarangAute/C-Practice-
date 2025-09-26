#include<stdio.h>
int main(){
	int start, end, num, rev, temp;
	printf("ENTER THE RANGE FOR PALINDROME : ");
	scanf("%d%d",&start,&end);

	for(num=start; num<=end; num++){
		temp=num;
		rev=0;
		while(temp!=0){
			rev=(rev*10)+(temp%10);
			temp/=10;
		}
		if(rev==num)
			printf("%d ",num);
	}
}
