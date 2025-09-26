#include<stdio.h>
void Addition (int arr[], int n);
void Subs (int arr[], int n);
void Multi (int arr[], int n);
void Divi (int arr[], int n);
int main(){
	while(1){
		int n, op;
		printf("ENTER THE COUNT OF NUMBER TO BE OPERATED: \n");
		scanf("%d",&n);
		int arr[n];
		printf("ENTER THE NUMBERS TO BE OPERATED: \n");
       		for(int i=0; i<n; i++){
			scanf("%d", &arr[i]);
		}
	
		printf("ENTER YOUR CHOICE : \n	1.ADDITION  \n	2.SUBSTRACTION	\n	3.MULTIPLICATION  \n	4.DIVISION   \n	5.EXIT \n");
		scanf("%d ", &op);
	
		switch(op){
			case 1: Addition (arr, n);
				break;
			case 2: Subs (arr, n);
				break;
			case 3: Multi (arr, n);
				break;
			case 4: Divi (arr, n);
				break;
			case 5: printf("EXITING PROGRAM......👋👋\n");
				return 0;
			default: printf("INVALID INPUT 😞\n");		
		}
	}
}


void Addition (int arr[], int n){
	int add =0;
	for(int i=0;i<n;i++){
		add+= arr[i];
	}
	printf("ADDITION IS : %d \n",add);
}

void Subs (int arr[], int n){
	int sub = arr[0];
	for (int i=1;i<n;i++){
		sub-=arr[i];
	}
	printf("RESULT OF SUBSTRACTION IS : %d \n",sub);
}

void Multi (int arr[], int n){
	int mul=1;
	for(int i=0; i<n; i++){
		mul*=arr[i];
	}
	printf("RESULT FOR MULTIPLICATION IS : %d \n",mul);
}

void Divi (int arr[], int n){
	float div = arr[0];
	for(int i=1; i<n; i++){
		div=div/arr[i];
	}
	printf("RESULT OF DIVISION IS : %.2f \n",div);
}
