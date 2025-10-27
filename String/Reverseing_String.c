#include<string.h>
int main(){
    char s[20], S[20];
    printf("ENTER THE STRING : ");
    scanf(" %[^\n]",s);

    int i;
    for(i=0; s[i]!=0; i++);
    for(int j=i-1; j>=0; j--){
        printf("%c ", s[j]);
    }
    printf("\n");
}