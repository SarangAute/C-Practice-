#include<stdio.h>
int main(){
    int num, i, j;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    
    char *p = (char*)&num;
    int charBits = sizeof(char)*8;             
    int charsize = sizeof(num)/sizeof(char);      

    for(j = charsize - 1; j >= 0; j--){                
        for(i = charBits - 1; i >= 0; i--){         
            printf("%d",((*(p+j))>>i)&1);
        }
    }
    printf("\n");
}