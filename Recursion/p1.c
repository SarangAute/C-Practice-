#include<stdio.h>
void fun();

int main(){
    printf("In main()....\n");
    fun();
}

void fun(){
    static int i=0;
    if(i++ < 3){
        printf("In fun(), i=%d \n",i);
        fun();
    }
}