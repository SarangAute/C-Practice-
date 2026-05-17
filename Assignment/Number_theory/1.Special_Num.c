/*
 Q1. Special Numbers (Count from 1 to N)
Problem:
You are given a number N as a string. A number is called
special
if it
cannot
beexpressed in the form
c^d
where
c > 1
and
d > 1
. In other words, perfect powers (e.g., 4 = 2²,8 = 2³, 9 = 3²) are
not
special. Count how many numbers from 1 to N (inclusive) are special.Return the result as a string.
Input:
A string representing integer N
Output:
A string representing the count of special numbers from 1 to N

eg: 
Input : "10"
Output : "7"
Numbers 1–10: 1 2 3 4 5 6 7 8 9 10
Perfect powers (NOT special): 4, 8, 9
Special numbers: 1, 2, 3, 5, 6, 7, 10 → count = 7

*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int Nspecial(char *N){
	int num = atoi(N);

	int arr[num], count=0;
	for(int i=1; i<=num; i++)
		arr[i] = i;

	for(int i=2; i<=num; i++){
		for(int j=2; j<=num; j++){
			int p = pow(i,j);	//cc <file_name>.c -lm
			if(p>num)
				break;
			if(p <= num)
				arr[p] = 0;
		}
	}
	for(int i=0; i<num; i++){
		if(arr[i] != 0)
			count++;
	}
	return count;
}

int main(){
	char ch[5];
	printf("ENTER NUMBER AS A RANGE : ");
	scanf("%s",ch);

	printf("OUTPUT: %d\n",Nspecial(ch));
	return 0;
}
