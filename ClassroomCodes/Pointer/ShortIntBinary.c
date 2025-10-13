#include<stdio.h>
int main(){
    int num, i, j;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    
    short int *p = (short int*)&num;
    int shortBits = sizeof(short int)*8;             
    int shortsize = sizeof(num)/sizeof(short int);      

    for(j = shortsize - 1; j >= 0; j--){                
        for(i = shortBits - 1; i >= 0; i--){         
            printf("%d",((*(p+j))>>i)&1);
        }
    }
    printf("\n");
}