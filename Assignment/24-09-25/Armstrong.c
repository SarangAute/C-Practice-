#include<stdio.h>
#include<math.h>

int main(){
	int num, arm=0, temp, temp2, x=0, y=0;
	printf("ENTER THE NUMBER TO CHECK ARMSTRONG NUMBER : ");
	scanf("%d",&num);
	temp = temp2=num;

	while(temp!=0){
		temp/=10;
		y++;
	}

	for(int i=0; i<y; i++){
		x = num%10;
		arm+=pow(x,y);
		num/=10;
	}

	if(temp2 == arm){
		printf("ARMSTRONG...\n");
	}else
		printf("NOT AN ARMSTRONG..\n");

}
