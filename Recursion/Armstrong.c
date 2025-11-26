#include<stdio.h>
#include<math.h>
int arm(int ,int );
int power_count(int);

int main(){
        int num;
        printf("ENTER THE NUMBER TO CHECK IS IT ARMSTRONG OR NOT : \n");
        scanf("%d",&num);

        int po = power_count(num);
	int sum = arm(num, po);

	if (sum == num)
       		 printf("*** ARMSTRONG NUMBER ***\n");
	else
        	printf("*** NOT AN ARMSTRONG NUMBER ***\n");

	return 0;

}

int power_count(int n){
	if(n==0)
		return 0;
	return 1 + power_count(n/10);
}


int arm(int n, int po) {
    if (n == 0)
        return 0;

    int digit = n % 10;
    return pow(digit, po) + arm(n / 10, po);
}


