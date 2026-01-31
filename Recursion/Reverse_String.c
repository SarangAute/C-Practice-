#include<stdio.h>
void RevStr(char* ,int ,int );
int main(){
        char s[20];
        int i;
        printf("ENTER THE STRING : ");
        scanf(" %[^\n]",s);

        for(i=0;s[i];i++);
        RevStr(s,i,0);
}

void RevStr(char* s,int n, int i){
        char temp;
        if(i<n/2){
                temp=s[i];
                s[i]=s[n-i-1];
                s[n-i-1]=temp;
                RevStr(s,n,i+=1);
        }
        else
                printf("%s",s);
}
