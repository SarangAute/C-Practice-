#include<stdio.h>
int main(){
    int a=5, b=-2, c=1, d=3, e=2, f;
    f= a + ++b / c * d - e % 2;
    /*PRIORITY:  ++   /   *   %   +   -
    ++b = -1
    -1 / 1 = -1 -> {5 + -1 * 3 - 2 % 2}
    -1 * 3 = -3
    2 % 2 = 0 -> {5 + -3 - 0}
    f = 5 + -3 = 2
    */
    printf("f= a + ++b / c * d - e %% 2 =  %d \n", f); // f = 2
    
}