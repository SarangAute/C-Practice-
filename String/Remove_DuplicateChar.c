#include<stdio.h>
char* RemoveDuplChar(char* s){
    int i,j,k;
    for(i=0; s[i]; i++){
        for(j=i+1; s[j]; j++){
            if(s[i] == s[j]){
                for(k=j;s[k];k++)
                s[k] = s[k+1];
            j--;
            }
        }
    } 
    return s;
}

int main(){
    char s[40];
    printf("ENTER THE STRING : \n");
    scanf(" %[^\n]",s);

    RemoveDuplChar(s);
    printf("%s \n",s);

}