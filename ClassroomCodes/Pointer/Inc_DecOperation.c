#include<stdio.h>
int main(){
    int x = 10, y = 20, z;
    int *p = &x;
    printf("&x = %p  &y = %p  &z = %p  &p = %p \n",&x,&y,&z,&p);
    //&x = 0061FF1C  &y = 0061FF18  &z = 0061FF14  &p = 0061FF10 
    printf("&x = %d  &y = %d  &z = %d  &p = %d \n",&x,&y,&z,p);


    // z = *p++;    //x = 10  y = 20  z = 10  *p = 4194432
    // z = *++p;    //x = 10  y = 20  z = 4194432  *p = 4194432 
    // z = (*p)++;  //x = 11  y = 20  z = 10  *p = 11 
    // z = ++(*p);  //x = 11  y = 20  z = 11  *p = 11 
    // z = ++*p++;  //x = 11  y = 20  z = 11  *p = 4194432 
     z = ++(*p)++;

    printf("x = %d  y = %d  z = %d  *p = %d \n",x,y,z,*p);
}