#include<stdio.h>

void SpecificNo();
void ListNo();

int main (){
	int op;
	printf("ENTER THE OPTIONS:  \n	1.DEC-OCT-HEXA FOR SPCIFIC NUMBER  \n	2.LIST GIVEN BY USER FROM START TO END \n	3.EXIT \n");
	scanf("%d",&op);
	switch(op){
		case 1: SpecificNo();
			break;

		case 2: ListNo();
			break;

		case 3: printf("EXITING PROGRAM...");
			return 0;
	}
}

void SpecificNo(){
	int no;
	printf("ENTER THE NUMBER : \n");
	scanf("%d",&no);
	printf("DECIMAL VALUE IS : %d\n",no);
	printf("OCTAL VALUE IS : %o\n",no);
	printf("HEXA-DECIMAL VALUE IS : %x\n",no);
}

void ListNo(){
	int start, end;
	printf("ENTER THE STARTING AND ENDING FOR THE LIST: \n");
	scanf("%d%d",&start,&end);
	for(int i=start; i<=end; i++){	
		printf("DECIMAL : %d	OCTAL : %o	HEXA-DEC : %x \n",i,i,i);
	//	printf("OCTAL VALUE IS : %o\n",i);
	//	printf("HEXA-DECIMAL VALUE IS : %x\n",i);
	}
}
