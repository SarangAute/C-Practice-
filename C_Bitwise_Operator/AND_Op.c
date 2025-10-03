#include<stdio.h>
int main(){
    int A = 10 & 20;        //BITWISE OPERATOR
    int B = 10 && 20;       //LOGICAL OPERATOR

    printf(" BITWISE : %d \n",A);  /*10 = 0000 0..0 1010
                                     20 = 0000 0..1 0100
                                     --------------------
                                     AND= 0000 0..0 0000    */


    printf(" LOGICAL : %d \n",B);   /* 10 && 20 will check 
                                    only for non zero values*/
}