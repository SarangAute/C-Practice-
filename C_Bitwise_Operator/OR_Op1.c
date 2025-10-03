#include<stdio.h>
int main(){
    int O = 10|20;
    int L_O = 10||20;

    printf(" BITWISE : %d \n",O);  /*10 = 0000 0..0 1010
                                     20 = 0000 0..1 0100
                                     --------------------
                                     OR = 0000 0..1 1110  = 30  */


    printf(" LOGICAL : %d \n",L_O);   /* 10 || 20 will check 
                                     only for non zero values
                                     and if 1st true then it 
                                     will not check 2nd term*/
}