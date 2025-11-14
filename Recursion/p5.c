#include<stdio.h>
int fact(int);

int main(){
    int n,f;
    printf("Enter the value: \n");
    scanf("%d",&n);

    f=fact(n);
    printf("Factorial = %d\n",f);
}

int fact(int n){
    if((n==1)||(n==0))
    return 1;
    else
    return n*fact(n-1);
}