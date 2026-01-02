#include<stdio.h>
void Triangle();
void Square();
void Sandglass();
void Butterfly();
int main(){
	int op;
	printf("HELLO,\n	WELCOME TO PATTERN PROGRAM...\n");
	printf("ENTER THE CHOICE FOR PATTERN: \n	1.TRIANGLE\n	2.SQUARE\n	3.SANDGLASS\n	4.BUTTERFLY\n");
	scanf("%d",&op);
	switch(op){
		case 1 :printf("WELCOME TO TRIANGLE PROGRAM....\n"); 
			Triangle();
			break;

		case 2 :printf("WELCOME TO SQUARE PROGRAM....\n"); 
			 Square();
			 break;

		case 3 :printf("WELCOME TO THE SANDGLASS PROGRAM....\n");
			Sandglass();
			break;

		case 4: printf("WELCOME TO THE BUTTERFLY PROGRAM....\n");
			Butterfly();
			break;

		Default:
			printf("ENTERED WRONG CHOICE....\n");
	}
	return 0;
}
void Triangle(){
	int n,op;
	printf("WHICH TYPE OF TRIANGLE YOU WANT? \n1.RIGHT ANGLE TRIANGLE \n2.EQUILATERAL TRIANGLE \n3.DIAMOND \n");
	scanf("%d",&op);
	switch(op){
		case 1:{
			printf("ENTER THE NUMBER OF ROWS FOR TRIANGLE PATTERN: \n");
			scanf("%d",&n);
			for(int i=0;i<=n;i++){
				for(int j=0;j<i;j++){
					printf("* ");
				}
				printf("\n");
			}
			break;
		       }

		case 2:{
		       	int row ;
			printf("ENTER THE NUMBER OF ROWS TO BE PRINTED: \n");
			scanf("%d",&row);
			for(int i=1; i<=row; i++){
				for(int j=1; j<=row-i; j++){
					printf(" ");
				}
				for(int j=1; j<=2*i-1; j++){
					printf("*");
				}
				printf("\n");
			}
		        break;
		       }
		case 3: {
			int row, height;
			printf("ENTER THE HEIGHT OF DIAMOND : \n");
			scanf("%d",&height);
			row = height/2;

			// UPPER HALF DIAMOND
			for(int i=1; i<=row; i++){
				for(int j=1; j<=row-i; j++){
					printf(" ");
				}
				for(int j=1; j<=2*i-1; j++){
					printf("*");
				}
				printf("\n");
			}

			// LOWER HALF DIAMOND
			for(int i=row; i>=1; i--){
				for(int j=1; j<=row-i; j++){
					printf(" ");
				}
				for(int j=1; j<=2*i-1; j++){
					printf("*");
				}
				printf("\n");
			}
			break ;
			} 
	}
}
void Square(){
	int n;
	printf("ENTER THE SIDE STAR LENGTH FOR SQUARE : \n");
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("* ");
		}
		printf("\n");
	}
}

void Sandglass(){
	int row, height;
	printf("ENTER THE HEIGH OF PATTERN :  \n");
	scanf("%d",&height);
	row= height/2;

	//upper half
	for(int i=row; i>=1; i--){
		for(int j=1; j<=row-i; j++){
			printf(" ");
		}
		for(int j=1; j<=2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}


	//LOWER HALF
		for(int i=1; i<=row; i++){
				for(int j=1; j<=row-i; j++){
					printf(" ");
				}
				for(int j=1; j<=2*i-1; j++){
					printf("*");
				}
				printf("\n");
			}
	
}

void Butterfly(){
	int n, height;
	printf("ENTER THE HEIGHT OF BUTTERFLY : \n");
	scanf("%d",&height);
	n=height/2;

	//UPPER HALF
	for(int i=0; i<=n; i++){
		for(int j=-n; j<=n; j++){
			if((j>-i)&&(j<i)){
				printf(" ");
			}else printf("* ");
		}
		printf("\n");
	}
}
