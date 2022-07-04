//Existing file ghya Compare kara files cha data identical asel tr ho 
//IN BUILT FUNCTION MEMCMP


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

 bool FileCompare(char Source[],char Destination[])
{
	int fdsrc=0,fddest=0,iret1=0,iret2=0,icmp=0;
	char Buffer1[FILESIZE];
	char Buffer2[FILESIZE];
	
	fdsrc= open(Source,O_RDONLY);
	if(fdsrc== -1)
	{
		printf("unable to open source file\n");
		return false;
	}
	
	fddest= open(Destination,O_RDONLY);
	if(fddest== -1)
	{
		printf("unable to open destination file\n");
		return false;
	}
	    while(1)
		{
			iret1= read(fdsrc,Buffer1,FILESIZE);
			iret2= read(fddest,Buffer2,FILESIZE);
			
			if((iret1==0)||(iret2==0)||(iret1 !=iret2))
			{
				break;
		    }
			
			icmp=memcmp(Buffer1,Buffer2,iret1);
			if(icmp!=0)
			{
				break;
			}
		}
			
			close(fdsrc);
			close(fddest);
			
			
			if((iret1==0) && (iret2==0))
			{
				return true;
			}
			else
			{
				return false;
			}
		
}




int main()
{
char Fname1[20];
char Fname2[20];
bool bret=false;

printf("Enter file name which contains the data\n");
scanf("%s",Fname1);


printf("Enter file name that you want to create\n");
scanf("%s",Fname2);

FileCompare(Fname1,Fname2);
if(bret==true)
{
	printf("files are same");
}
else
{
	printf("files are diffrent");
}

return 0;
}




