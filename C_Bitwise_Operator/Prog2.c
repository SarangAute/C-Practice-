#include<stdio.h>
int main(){
    int x = 0x100 , y = 064 , z = 48 , r;
    r = x++ + ++y + --z;
    /*0x100 (OCTAL) -> 1   0   0
                    0001 0000 0000
      064 (HEXA-DEC) -> 6   4
                       110 100
    x++ = 256   ++y = (52+1) 53     --z = 47 ->  356
    */
    printf("x = %d , y = %d , z = %d , r = %d \n", x,y,z,r);
}