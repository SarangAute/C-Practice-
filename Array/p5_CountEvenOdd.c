#include <stdio.h>

void PrintArr(int arr[], int n);
void CountEveOdd(int arr[],int n);

int main() {
    int arr[]={10,-21,32,-44,50};
    int op, n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
        
    CountEveOdd(arr, n);
    
}


void CountEveOdd(int arr[],int n){
    int Ecount=0, Ocount=0;
    printf("COUNTING EVEN AND ODD NUMBERS PRESENT IN ARRAY....\n");
    for(int i=0; i<n; i++){
        if(arr[i]%2==0)
            Ecount++;
        else
            Ocount++;
    }
    printf("EVEN NUMBERS : %d     ODD NUMBERS : %d  \n",Ecount,Ocount);
}

void PrintArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}