#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX 5

int count = 0;

struct stack{
	int num;
	struct stack* next;
};

void display(struct stack* ptr){
	while(ptr != 0){
		printf("| %d  |",ptr->num);
		ptr = ptr->next;
	}
	printf("\n");
}

void Enque(struct stack** ptr){
	if(count == MAX){
		printf("QUEUE IS FULL***\n");
		return ;
	}
	
	struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
	printf("ENTER ELEMENT: ");
	scanf("%d",&temp->num);
	temp->next = 0;

	if(*ptr == 0)
		*ptr = temp;
	
	else{
		struct stack* last = *ptr;
		while(last->next != 0)
			last = last->next;
		last->next = temp;
	}
	
	count++;
	display(*ptr);
}


void Deque(struct stack** ptr){
	if(count == 0){
		printf("QUEUE IS EMPTY!!!\n");
		return ;
	}
	struct stack* temp = *ptr;
	printf("DEQUEUE ELEMENT: %d\n",temp->num);
	*ptr = temp->next;
	count--;
	free(temp);
	display(*ptr);
}

int main(){
	struct stack* hptr=0;
	char op;

	while(1){
		printf("+----------------------+\n");
		printf("|ENTER CHOICE:         |\n");
		printf("|	E/e: ENQUE     |\n");
		printf("|	D/d: DEQUE     |\n");
		printf("|	X/x: EXIT      |\n");
		printf("+----------------------+\n");
		scanf(" %c",&op);
	
		switch(op){
			case 'E': case 'e':
				Enque(&hptr);
				break;
	
			case 'D': case 'd':
				Deque(&hptr);
				break;
	
			case 'X': case 'x':
				exit(0);
	
			default : printf("invalid input....\n");
				  break;
		}
	}
}
