#include<stdio.h>
int main(){
    int a= ~10;
        /*10 = 0000 0000 0..0 0000 1010 
         ~10 = 1111 1111 1..1 1111 0101  to calculate we have to take 2's complete
    ~10(2's) = 0000 0000 0..0 0000 1011 = -11 */

    printf("~10 = %d \n", a);

    int b= ~25;
        /*25 = 0000 0000 0..0 0001 1001
         ~25 = 1111 1111 1..1 1110 0110  to calculate we have to take 2's complete 
    ~25(2's) = 0000 0000 0..0 0001 1010  = -26 */

    printf("~25 = %d \n", b);
}