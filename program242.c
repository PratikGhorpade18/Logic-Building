//open file  exesting file and  read

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
	int iRet=0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	

	fd=open(Fname,O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;//failure
	}
	
	
		
	printf("File is successfully opened with FD %d\n",fd);
	iRet=read(fd,Data,10);
		//kashat,kay,kiti
	
	printf("%d bytes gets successfully read from  the file\n",iRet);
	
	printf("Data from the file is %s\n",Data);
	write(1,Data,iRet);
	return 0;
}
//0 STDIN   KEYBOARD
//1 STDOUT  MONITOR
//2 STDERR  MONITOR