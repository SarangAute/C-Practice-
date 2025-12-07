#include<stdio.h>
struct Student{
    int Roll;
    char Name;
    float Marks;
};

int main(){
    struct Student v = {10,'a',98.93};
    printf("PRINTING DATA IN STRUCTURE \n");
    //accessing by '.' (dot) operator...
    printf("%d %c %f \n",v.Roll,v.Name,v.Marks);
    //accessing by '->' (arrow) operator...
    printf("%d %c %f \n",(&v)->Roll,(&v)->Name,(&v)->Marks);

    printf("\nPRINTING ADDRESS ...\n");
    printf("%p %p %p \n",&v.Roll,&v.Name,&v.Marks);
    printf("%p %p %p \n",&(&v)->Roll,&(&v)->Name,&(&v)->Marks);
}