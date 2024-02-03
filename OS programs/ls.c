//ls- list 
//./a.out <directory_path>

#include<stdio.h>
#include<dirent.h>

int main(int argc,char* argv[])
{
	DIR *dir=opendir(argv[1]);
	struct dirent *entry;
	if(dir==NULL){
		printf("error can't open directory");
		return 1;
	}
	while((entry=readdir(dir))!=NULL){
		printf("%s\n",entry->d_name);
	}
	closedir(dir);
	return 0;
}