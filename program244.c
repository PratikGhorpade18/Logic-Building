//ACCEPT FILE FROM USER AND READ WHOLE DATA FROM FILE 


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DispalyData(char Fname[])
{
    char Data[10];
    int fd=0;		//file descriptor
	int iRet=0;

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return;//failure
	}
	
	printf("File is successfully opened with FD %d\n",fd);
	
	while( (iRet= read(fd,Data,sizeof(Data)))!=0)
	{
		write(1,Data,iRet);
	}
	
	close(fd);		
}

int main()
{
	char Fname[20];
		
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	DispalyData(Fname);

	return 0;
}