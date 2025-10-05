#include<stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER TO CHECK WEATHER IT IS POSITIVE OR NEGATIVE PROGRAM USING BITWISE : ");
    scanf("%d",&num);

    printf("**UNSING >> OPERATOR** \n");
    if(num >> 31 == 0)
    printf("POSITIVE \n");
    else
    printf("NEGATIVE \n");

    printf("\n \n");
    
    printf("**UNSING ~ OPERATOR** \n");
    if(~num < 0)
    printf("POSITIVE \n");
    else
    printf("NEGATIVE \n");
}