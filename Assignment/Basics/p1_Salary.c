/*
“Rajesh’s basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.”
*/

#include<stdio.h>
int main(){
    int Base_Salary, Dearness_Allowance, Rent_Allowance;
    printf("ENTER THE BASE SALARY OF PERSON : ");
    scanf("%d",&Base_Salary);

    Dearness_Allowance = (Base_Salary/100)*40;
    Rent_Allowance = (Base_Salary/100)*20;

    printf("THE GROSS SALARY OF PERSON IS : %d \n", Base_Salary + Dearness_Allowance + Rent_Allowance);
}