#include<stdio.h>
int main(){
    char S[20], ch;
    printf("ENTER THE STRING : ");
    scanf(" %[^\n]",S);

    printf("ENTER THE CHARACTER TO SEARCH IN STRING : ");
    scanf(" %c",&ch);
    
    printf("THE STRING USER ENTERED IS : %s \n",S);
    printf("THE CHARATER TO SEARCH IN A STRING IS : %c \n",ch);

    int count = 0;
    for(int i=0; S[i]; i++){
        if(S[i] == ch)
            count++;
    }
    printf("THE %c CHARACTER TO BE SEARCH IN STRING IS REPEATED FOR %d TIMES...",ch,count);  
}