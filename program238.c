//create and write 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    int iret=0;
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
	
	printf("File is successfully created with FD %d\n",fd);
	
	iret=write(fd,Data,strlen(Data));
	
	
	printf("%d byte sucessfully written in file\n",iret);
	return 0;
}