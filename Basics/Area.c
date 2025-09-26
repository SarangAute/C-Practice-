#include<stdio.h>
#define PI 3.14
void A_Circle();
void A_Square();
void A_Trangle();
void A_Rectangle();

int main(){
	int op;
	printf("HELLO WECLOME IN AREA PROGRAM...🙏\n");
	printf("ENTER THE CHOICE FOR WHICH YOU WANT TO FIND AREA..\n");
	printf("	1.AREA OF CIRCLE. \n	2.AREA OF SQUARE \n	3.AREA OF TRIANGLE \n	4.AREA OF RECTANGLE \n	5.EXIT... \n");
	scanf("%d",&op);

	switch(op){
		case 1:  A_Circle();
			 break;
		case 2:  A_Square();
			 break;
		case 3:  A_Trangle();
			 break;
		case 4:  A_Rectangle();
			 break;
		case 5: printf("EXITING PROGRAM...");
			return 0;
	
	
	}
	return 0;
}
void A_Circle(){
	float r;
	printf("ENTER THE VALUE OF RADIUS : \n");
	scanf("%f",&r);
	printf("THE AREA OF CIRCLE IS : %.2f \n", PI*r*r);
}

void A_Square(){
	float side;
	printf("ENTER THE SIDE OF SQUARE : \n");
	scanf("%f",&side);
	printf("THE AREA OF SQUARE IS : %.2f \n",side*side);
}

void A_Trangle(){
	float base , height;
	printf("ENTER THE BASE AND THEN HEIGHT : \n");
	scanf("%f%f",&base,&height);
	printf("THE AREA OF TRIANGLE IS : %.2f \n",0.5*base*height);
}

void A_Rectangle(){
	float length , breadth;
	printf("ENTER THE LENGTH AND BREADTH OF RECTANGLE : \n");
	scanf("%f%f",&length, &breadth);
	printf("THE AREA OF RECTANGLE IS : %.2f \n", length*breadth);
}
