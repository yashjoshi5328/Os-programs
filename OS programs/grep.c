//grep: global regular expression search and print
//./a.out "text" <filename>

#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[])
{
	FILE* file=fopen(argv[2],"r");
	char line[256];
	while(fgets(line,sizeof(line),file)!=NULL){
		if(strstr(line,argv[1])!=NULL){
			printf("%s\n",line);
		}
	}
	fclose(file);
	return 0;
}