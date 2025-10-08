#include<stdio.h>

void BinaryRep(int num){
    int i = sizeof(num)*8 - 1;
    for(i ; i>=0 ; i--){
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}

int main(){
    int num, pos1, pos2;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    BinaryRep(num);
    printf("\n");

    printf("ENTER BOTH THE POSITIONS TO BE SWAPPED : ");
    scanf("%d%d",&pos1,&pos2);

    if(((num >> pos1) & 1)!= ((num >> pos2) & 1)){
        num = num ^ (1 << pos1);
        num = num ^ (1 << pos2);
        BinaryRep(num);
    }
    printf("\n");
}