#include<stdio.h>

int UD_strstr(const char *s1, const char *s2){
    int i, j;

    for(i = 0; s1[i]; i++){
        for(j = 0; s2[j]; j++){
            if(s1[i + j] != s2[j])
                break;
        }

        if(s2[j] == '\0')
            return i + 1;   // return position (1-based index)
    }

    return 0;   // not found
}

int main(){
    char s1[40],s2[40];
    printf("ENTER THE MAIN STRING : \n");
    scanf("%[^\n]",s1);

    printf("ENTER THE SUBSTRING : \n");
    scanf(" %[^\n]",s2);

    int pos = UD_strstr(s1,s2);
    if(pos>0)
        printf("%s IS PRESENT IN MAIN STRING AT %d POSITION \n",s2,pos);
    else
        printf("SUBSTRING IS NOT PRESENT IN THE MAIN STRING ..........\n");
}