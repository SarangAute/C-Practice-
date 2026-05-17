/*
 Gym Exercise Completion (Scheduling)
Problem:
You are given N exercises. Each exercise has a required number of days to completeand a deadline. You can work on only one exercise at a time, and once started it must becompleted without interruption. Determine the
maximum number of exercises
that can be fullycompleted before their deadlines.
Inputs:
	input1
	— Number of exercises N
	input2[]
	— Days required for each exercise
	input3[]
	— Deadline for each exercise
	Output:
	Maximum number of completable exercises
	Example:
		input1 : 4
		input2[] : {10, 20, 40, 50}
		input3[] : {20, 30, 50, 60}
		Output : 2
 */

#include<stdio.h>
#include<stdlib.h>

int MaxNoOfTask(int *Days, int *Dline, int n){
	int DDmax=Dline[0], count=0;
	for(int i=0;i<n;i++){
		if(DDmax<Dline[i])
			DDmax=Dline[i];
	}
	
	for(int i=0;i<n;i++){

        int RD = 99999; // reset minimum every loop
        int index = -1;

        // Find smallest remaining task
        for(int j=0;j<n;j++){
            if(Days[j] > 0 && Days[j] < RD){
                RD = Days[j];
                index = j;
            }
        }

        // No task left
        if(index == -1)
            break;

        DDmax -= RD;

        if(DDmax >= 0){
            count++;
            Days[index] = -1; // mark used
        }
        else{
            break;
        }
    }

    return count;
}

int main(){
	int n;
	printf("ENTER THE NUMBER OF EXERCISES: ");
	scanf("%d",&n);

	int *Days = (int*)malloc(n*sizeof(int));
	int *DeadLine = (int*)malloc(n*sizeof(int));

	printf("ENTER NUMBER OF DAYS AND THEN THEIR DEADLINE : ");
	for(int i=0; i<n; i++){
		scanf("%d",&Days[i]);
		scanf("%d",&DeadLine[i]);
	}

	printf("%d \n",MaxNoOfTask(Days, DeadLine, n));
}
