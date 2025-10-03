#include<stdio.h>
int main(){
    int O = -10|18;
    int L_O = 10||18;

    printf(" BITWISE : %d \n",O);  /*-10 = 1111 1..1 0110
                                      18 = 0000 0..1 0010
                                     --------------------
                                     OR = 1111 1..1 0110  = -10  */


    printf(" LOGICAL : %d \n",L_O);   /* 10 || 20 will check 
                                     only for non zero values
                                     and if 1st true then it 
                                     will not check 2nd term*/
}