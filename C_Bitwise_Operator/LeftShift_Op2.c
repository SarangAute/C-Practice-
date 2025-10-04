#include<stdio.h>
int main(){
    int A = -20 << 3;
    /*   -20 = 1111 1111 1..1 0010 1100
    -20 << 3 = 1111 1111 1.11 0110 0000
    to calculate take its 2's complement
    -20<<3(2's) 0000 0000 0.00 1010 0000 = -160 */
    printf(" -20 << 3 = %d \n", A);
}