#include<stdio.h>

void BinaryRep(int num){
    int i = sizeof(num)*8 - 1;
    for(i ; i>=0 ; i--){
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}

int main(){
    int num, s = sizeof(num)*8 - 1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    BinaryRep(num);

    for(int i=0 ; i<=s/2 ; i++){
        if ( ((num >> i) & 1) != ((num >> (s - i)) & 1) ){
            num = num ^ (1 << i);
            num = num ^ (1 << (s- i));
        }
    }
    BinaryRep(num);
    printf("\n");
}


