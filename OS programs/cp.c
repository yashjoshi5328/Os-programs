//cp : copy
//./a.out <source_file> <destination_file>

#include <stdio.h>

int main(int argc,char* argv[])
{
	FILE* source=fopen(argv[1],"r");
	if(source==NULL){
		printf("error opening source file");
		return 1;
	}
	FILE* destination=fopen(argv[2],"w");
	int ch;
	while((ch=fgetc(source))!=EOF){
		fputc(ch,destination);
	}
	
	fclose(source);
	fclose(destination);

	printf("copied successfully");
	return 0;
}
	