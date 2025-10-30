#include<stdio.h>
int main(){
	char a[] = "embedded";
	int i,j,count;
	for(i=0;a[i];i++){
		count=1;
		for(j=0;j<i;j++){
			if(a[i] == a[j])
				break;
		}

		if(i==j){
			for(j=i+1;a[j];j++){
				if(a[i] == a[j])
					count++;
			}
			printf("%c --> %d \n",a[i],count);
		}
	}
	printf("\n");
}
