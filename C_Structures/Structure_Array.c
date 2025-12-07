#include<stdio.h>
struct st{
    int x;
    char ch;
};

int main(){
    //struct st s[3];
    struct st s[3] = {{10,'a'},{20,'b'},{30,'c'}};
    printf("PRINTING DATA....\n");
    for(int i=0;i<3;i++){
        printf("%d %c \n", s[i].x,s[i].ch); //using '.' operator
        printf("%d %c \n", (&s[i])->x,(&s[i])->ch);
    }
}