#include<stdio.h>
char* RemoveAlphabet(char* s){
    int i, j;
    for(i=0; s[i]; i++){
        if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
            for(j=i; s[j]; j++)
                s[j] = s[j+1];
            i--;
        }
    }
    return s;
}

int main(){
    char s[40];
    printf("ENTER THE STRING : \n");
    scanf(" %[^\n]",s);

    RemoveAlphabet(s);
    printf("%s",s);

}
