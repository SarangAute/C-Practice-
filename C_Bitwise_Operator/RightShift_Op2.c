#include<stdio.h>
int main(){
    int A = -10 >> 2;
    /*  -10 = 1111 .... 1111 0110
     -10>>2 = 1111 .... 1111 1101 
    to calculte bits take it's 2's complement and add -ve sign
    -10>>2(2's) =0000 .... 0000 0011 = -3 
    here bits are shifted at right side by 1
    and 0 bit is added from left side for 
    completing 2^31 bits   */

    printf("-10 >> 2 = %d\n", A);
}