///OPEN ONE DILE CREATE ONE AND COPY DATA OF OPENED IN CREATED 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024
void FileCopy(char Source[],char Destination[])
{
	int fdsrc=0,fddest=0,iret=0;
	char Buffer[FILESIZE];
	
	fdsrc= open(Source,O_RDONLY);
	if(fdsrc== -1)
	{
		printf("unable to open source file\n");
		return;
	}
	
	fddest= creat(Destination,0777);
	if(fddest== -1)
	{
		printf("unable to create new file\n");
		return;
	}
	
		while((iret= read(fdsrc,Buffer,FILESIZE))!=0)
		{
			write(fddest,Buffer,iret);
		}
		
		close(fdsrc);
		close(fddest);
}




int main()
{
char Fname1[20];
char Fname2[20];


printf("Enter file name which contains the data\n");
scanf("%s",Fname1);


printf("Enter file name that you want to create\n");
scanf("%s",Fname2);

FileCopy(Fname1,Fname2);

return 0;
}