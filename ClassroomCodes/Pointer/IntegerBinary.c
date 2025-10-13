#include<stdio.h>
int main(){
    int x, i;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    
    int *p = &x;
    i = sizeof(x)*8-1;
    for(i; i>=0; i--)
        printf("%d",((*p)>>i)&1);
    printf("\n");
}