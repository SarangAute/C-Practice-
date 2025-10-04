#include<stdio.h>
int main(){
    int A = 20 >> 1;
    /*   20 = 0000 .... 0001 0100
    20 >> 1 = 0000 .... 0000 1010 = 10 
    here bits are shifted at right side by 1
    and 0 bit is added from left side for 
    completing 2^31 bits   */

    printf("20 >> 1 = %d\n", A);

    int B = 20 >> 2;
    /*   20 = 0000 .... 0001 0100
    20 >> 1 = 0000 .... 0000 0101 = 5 
    here bits are shifted at right side by 2
    and 0 bit is added from left side for 
    completing 2^31 bits   */

    printf("20 >> 2 = %d\n", B);
}