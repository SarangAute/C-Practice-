#include<stdio.h>
#include<stdlib.h>

struct Node{
	int Roll;
	struct Node* next;
};

void Display(struct Node *ptr){
	while(ptr!=0){
		printf("%d -> ",ptr->Roll);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void rev_list(struct Node** ptr){
	struct Node *prev=NULL, *curr=*ptr, *next=NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*ptr = prev;
	Display(*ptr);
}

void add_begin(struct Node** ptr){
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	printf("Enter roll \n");
	scanf("%d",&temp->Roll);

	temp->next = *ptr;
	*ptr = temp;
	Display(*ptr);
}


void add_middle(struct Node** ptr){
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	printf("Enter roll \n");
	scanf("%d",&temp->Roll);

	if((*ptr == 0)||(temp->Roll < (*ptr)->Roll)){
		temp->next = *ptr;
		*ptr = temp;
	}
	else{
		struct Node* last = *ptr;
		while((last->next !=0)&&(last->next->Roll < temp->Roll))
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
	Display(*ptr);
}


void add_end(struct Node** ptr){
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	printf("Enter roll \n");
	scanf("%d",&temp->Roll);

	if(*ptr == 0){
		temp->next = *ptr;
		*ptr = temp;
	}
	else{
		struct Node* last = *ptr;
		while(last->next != 0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
	Display(*ptr);
}

int main(){
	struct Node* hptr = 0;
	char op;

	while(1){
		printf("+-------------------------+\n");
		printf("|****ENTER CHOICE****     |\n");
		printf("|B/b: ADD BEGIN           |\n");
		printf("|M/m: ADD MIDDLE          |\n");
		printf("|E/e: ADD END             |\n");
		printf("|R/r: REVERSE LINK        |\n");
		printf("|D/d: DISPLAY             |\n");
		printf("|X/x: Exit                |\n");
		printf("+-------------------------+\n");

		scanf(" %c",&op);

		switch(op){
			case 'B': case 'b': add_begin(&hptr);
					break;

			case 'M': case 'm': add_middle(&hptr);
					break;
			
			case 'E': case 'e': add_end(&hptr);
					break;
			
			case 'R': case 'r': rev_list(&hptr);
					break;
			
			case 'D': case 'd': Display(hptr);
					break;

			case 'X': case 'x': exit(0);
					    break;

			default: printf("WRONG CHOICE, TRY AGAIN!! \n");
		}
	}
}
