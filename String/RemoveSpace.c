#include<stdio.h>
void SkipSpace(char *);
int main(){
    char s[40];
    printf("ENTER THE STRING : \n");
    scanf(" %[^\n]",s);
    SkipSpace(s);
}

void SkipSpace(char* s){
    for(int i=0; s[i]; i++){
        if(s[i] == ' ')
            continue;
        else{
            printf("%c",s[i]);
        }
    }
    printf("\n");
}