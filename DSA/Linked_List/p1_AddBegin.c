#include<stdio.h>
#include<stdlib.h>

void add_begin();
void print();
void save();

struct st{
	int roll;
	char name[20];
	float marks;
	struct st *next;	//self refrental structure pointer
};

struct st *hptr = 0;		//headPointer for dtoring address of 1st node

int main(){
	char op;
	
	do{
		add_begin();
		printf("DO YOU WANT TO ADD ONE MORE STUDENT RECORD (y/n)\n");
		scanf("%c",&op);
	}while(op == 'y');

	print();

	save();
}

void add_begin(){
	struct st* temp;
	temp = (struct st*) malloc (sizeof(struct st));

	printf("ENTER THE DATA \n");
	scanf("%d%s%f\n", &temp->roll,temp->name,&temp->marks);

	temp->next = hptr;
	hptr = temp;
}

void print(){
	struct st* ptr;
	ptr = hptr;
	while(ptr != 0){
		printf("%d %s %f \n",ptr->roll,ptr->name,ptr->marks);
	}
}

void save(){
	FILE* fp = fopen("Student_Data.txt","w");
	struct st* ptr;
        ptr = hptr;
        while(ptr != 0){
                fprintf(fp,"%d %s %f \n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
        }
	fclose(fp);

}
