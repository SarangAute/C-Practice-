#include<stdio.h>
int main(){
    int A = 10 << 1;
    /*10  = 0000 0..0 1010
    10<<1 = 0000 0..1 0100  =20 
    HERE EACH BIT IS SHIFTED TO LEFT 
    SIDE BY 1 AND 0 BIT ADDED TO RIGHT SIDE*/
    
    printf("10 << 1 = %d \n", A);

    int B = 10 << 2;
    /*10  = 0000 0..0 1010
    10<<2 = 0000 0.10 10000  =40 
    HERE EACH BIT IS SHIFTED TO LEFT 
    SIDE BY 2 AND 0 BITS ADDED TO RIGHT SIDE*/
    
    printf("10 << 2 = %d \n", B);
}