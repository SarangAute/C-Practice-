#include<stdio.h>

int main(int argc, char* argv[]){
	FILE* fp = fopen(argv[1],"r");
	int Tlines=0,Twords=0,Tchar=0;
	char ch;
	while((ch = fgetc(fp))!=EOF){
		++Tchar;
		if(ch == '\n')
			++Tlines;
		if(ch == ' '|| ch == '\n')
			++Twords;
	}

	printf("%d %d %d %s ",Tlines,Twords,Tchar,argv[1]);
}
