#include<stdio.h>
char* RemConSpace( char* s){
    int i=0, j=0;
    for(i=0; s[i]; i++){
        if((s[i] == ' ') && (s[i+1] == ' ')){
            for(j=i; s[j]; j++)
                s[j] = s[j+1];
            i--;
        }
    }
    return s;
}
int main(){
    char s1[40];
    printf("ENTER THE STRING : \n");
    scanf(" %[^\n]",s1);

    RemConSpace(s1);
    printf("%s \n",s1);

    return 0;
} 