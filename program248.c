//ACCEPT FILE FROM USER OPEN IT AND COUNT CAPITAL CHARACTERS FROM FILE 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountCapital(char Fname[])
{
    char Data[1024];
    int fd=0;		//file descriptor
	int iRet=0;
	int isum=0;
    int i=0;
	int icnt=0;

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;//failure
	}
	
	printf("File is successfully opened with FD %d\n",fd);
	
	while( (iRet= read(fd,Data,sizeof(Data)))!=0)
	{
		for(i=0;i<iRet;i++)
		{
		   if (Data[i]>='A'&& Data[i]<='Z')
		   {
		     icnt++;
			 }
	    }
	}
	
	close(fd);
    return icnt;	
}

int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet=CountCapital(Fname);
	printf("no of capital characters are: %d\n",iRet);
	
	return 0;
}