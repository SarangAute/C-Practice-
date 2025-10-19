#include <stdio.h>

void ReversingArr(int arr[], int n);
void PrintArr(int arr[], int n);

int main() {
    int arr[]={10,-21,32,-44,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
        
    ReversingArr(arr, n);
}

void ReversingArr(int arr[], int n){
    printf("REVERSING ARRAY.....\n");
    int temp;
    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-1-i] = temp; 
    }
    PrintArr(arr, n);
}



void PrintArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}