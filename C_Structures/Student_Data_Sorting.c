#include<stdio.h>
#include<string.h>

struct st{
    int Roll;
    char Name[20];
    float Marks;
};

void print (struct st* p);
void SortRoll(struct st* s);
void SortName(struct st* s);
void SortMarks(struct st* s);

int main(){
    int op;
    struct st p[3];
    printf("ENTER THE STUDENT DETAILS...\n");
    for(int i=0;i<3;i++)
        scanf("%d %[^\n] %f",&p[i].Roll,&p[i].Name,&p[i].Marks);
    while(1){
        printf("ENTER THE OPTION FOR SORTING :.....\n");
        printf("1. SORT BY ROLL  \n2.SORT BY NAME  \n3.SORT BY MARKS \n");
        scanf("%d",&op);
    
        switch(op){
            case 1: SortRoll(p);
                break;

            case 2: SortName(p);
                break;

            case 3: SortMarks(p);
                break;

            default: printf("*-*-* INVALID OPTION *-*-*\n");
        }
    }
}

void print (struct st* p){
    printf("PRINTING THE DATA....\n");
    for(int i=0;i<3;i++)
        printf("%d %s %f\n",p[i].Roll,p[i].Name,p[i].Marks);
}

void SortRoll(struct st* s){
    struct st temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(s[i].Roll>s[j].Roll){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    print(s);
}

void SortName(struct st* s){
    struct st temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(strcmp(s[i].Name , s[j].Name)> 0){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    print(s);
}

void SortMarks(struct st* s){
    struct st temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(s[i].Marks>s[j].Marks){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    print(s);
}
