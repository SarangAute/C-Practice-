#include<stdio.h>
int main(){
    int a=4, b=0, c=2, d=4, e=-5, f;
    f = ++a || ++b && --c * --d / ++e;
    /*PRIORITY: ++   --   *   /   &&   ||    
    ++a = 5     ++b = 1     --c = 1     --d = 3     ++e = -4
    --c * --d = 3
    3 / ++e = -4 -> -1
    NOTE: ALL THIS CALCULATION IS WASTE BECAUSE WE HAVE LOGICAL OPERATOR 
          WHICH ONLY IDENTIFY NON-ZERO NUMBER = 1, SO ANSWER f = 1.
          AFTER || OPERATOR EVERYTHING WILL BE AS IT IS
          b=0, c=2, d=4, e=-5
    */
    printf("a=%d  b=%d  c=%d  d=%d  e=%d  f=%d  \n",a,b,c,d,e,f);
}