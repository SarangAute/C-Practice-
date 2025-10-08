#include<stdio.h>

void BinaryRep(int num){
    int i = sizeof(num)*8 - 1;
    for(i ; i>=0 ; i--){
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}

int main(){
    int num, pos;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    BinaryRep(num);
    printf("\n");

    printf("ENTER THE POSITION OF BIT TO TOGGLE (index starts from 0) : ");    //TOGGLE MEANS MAKING A BIT 0 -> 1  AND  1 -> 0 
    scanf("%d",&pos);

    num = num ^ (1 << pos);
    BinaryRep(num);
    printf("%d \n",num);
}