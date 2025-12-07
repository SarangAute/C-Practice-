#include<stdio.h>
#include<stdlib.h>
struct st{
    int x; 
    char ch;
};

int main(){
    struct st* p;
    p=(struct st*)malloc(sizeof (struct st));
    printf("ENTER X, Ch VALUES \n");
    scanf("%d %c",&p->x,&p->ch);

    printf("X, Ch VALUES ARE : \n");
    printf("%d, %c",p->x,p->ch);
}