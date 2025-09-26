#include<stdio.h>
int main(){
	int i, num, Prev_num;
	for(num=1; num<=100; num++){
		for(i=2; i<=num/2; i++){
			if(num%i == 0)
				break;
		}
		if(i==num/2+1){
			if(Prev_num+2==num){
				printf("(%d,%d) ",Prev_num,num);
				Prev_num = num;
			}
			else
				Prev_num=num;
		}
		
	}
}
