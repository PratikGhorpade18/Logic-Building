//create and write in file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int fd=0;		//file descriptor
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
	printf("Enter the data that you want to write\n");
	scanf(" %[^'\n']s",Data);
	
	fd=creat(Fname,0777);
	if(fd==-1)
	{
		printf("unable to create the file\n");
		return -1;//failure
	}
	
	write(fd,Data,strlen(Data));
	
	printf("File is successfully created with FD %d\n",fd);
	return 0;
}