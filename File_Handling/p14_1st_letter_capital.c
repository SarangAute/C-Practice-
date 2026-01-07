#include<stdio.h>
int main(int argc, char* argv[]){
	if(argc < 1){
		printf("usage: ./a.out file_name \n");
		return 0;
	}
	FILE* fp= fopen(argv[1],"r+");
	char ch;
	int start = 1;

	while((ch = fgetc(fp))!=EOF){
		if((ch>='a'&& ch<='z')&& start ==1){
			fseek(fp,-1,SEEK_CUR);
			fputc(ch-32,fp);
			fseek(fp,0,SEEK_CUR);
			start = 0;
		}
	

		if(ch==' ' ||ch == '\n' || ch == ',' || ch == '.'){
			start = 1;
		}
	}
}
