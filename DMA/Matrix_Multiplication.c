#include<stdio.h>
#include<stdlib.h>

int main(){
	int R,C,i,j,k;
	printf("ENTER THE NUMBER OF ROWS AND COLUMNS FOR A MATRIX : \n");
	scanf("%d%d",&R,&C);

	int** A = (int**)malloc(R*sizeof(int*));
	int** B = (int**)malloc(R*sizeof(int*));
	int** r = (int**)malloc(R*sizeof(int*));

	for(i=0;i<C;i++){
		A[i] = (int*)malloc(C*sizeof(int));
		B[i] = (int*)malloc(C*sizeof(int));
		r[i] = (int*)malloc(C*sizeof(int));
	}

	printf("ENTER THE ELEMENTS IN 1st %dX%d MATRIX \n",R,C);
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
			scanf("%d",&A[i][j]);
	}
	printf("ENTER THE ELEMENTS IN 2nd %dX%d MATRIX \n",R,C);
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
			scanf("%d",&B[i][j]);
	}

	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			r[i][j] = 0;
			for(k=0;k<C;k++)
				r[i][j] += A[i][k] * B[k][j];
		}
	}
	
	printf("THE ADDITION OF 1st AND 2nd MATRIX IS....\n");
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
			printf("%d ",r[i][j]);
		printf("\n");
	}

	for(i=0;i<R;i++){
		free(A[i]);
		free(B[i]);
		free(r[i]);
	}

	for(i=0;i<R;i++){
		free(A);
		free(B);
		free(r);
	}
}
