#include<stdio.h>
struct st{
    int x;
    char ch;
};
void scan(struct st*);
void print (struct st);

int main(){
    struct st v;
    scan(&v);
    print(v);
}

void scan(struct st* p){
    printf("ENTER THE X,Ch VALUES \n");
    scanf("%d %c", &p->x,&p->ch);
}

void print(struct st s){
    printf("X,Ch VALUES ARE\n");
    printf("%d %c \n",s.x,s.ch);    
}