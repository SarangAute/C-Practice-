#include<stdio.h>
int main(){
    int x = 300;
    char *p = (char *)&x;

    if(*p == 44)
        printf("LITTLE ENDIAN \n");
    else
        printf("BIG ENDIAN \n");
}