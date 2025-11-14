#include<stdio.h>
void fun(char*);
void fun1(char*);

int main(){
    fun("hello");
    printf("\n");
    fun1("hello");
}

void fun(char *p){
    if(*p){
        fun(++p);
        printf("%c ",*p);   //o l l e 
    }
}

void fun1(char *p){
    if(*p){
        fun1(p+1);
        printf("%c ",*p);   //o l l e h
    }
}