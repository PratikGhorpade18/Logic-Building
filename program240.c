//open file  exesting file and write

 #include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>



//O_RDONLY   read
///O_WRONLY   write
// O_RDWR     read+write



int main()
{
	char Fname[20];
	char Data[100];
	int fd=0;		//file descriptor
	int iRet=0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;//failure
	}
	
	printf("File is successfully opened with FD %d\n",fd);
	
	printf("Enter the data that you want ot write:\n");
	scanf(" %[^'\n']s ",&Data);
		
	iRet=write(fd,Data,strlen(Data));
	
	printf("%d byte sucessfully written in file\n",iRet);
	return 0;
}