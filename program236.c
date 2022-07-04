//create file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//read= 4
//write  2
//excute  1

//permission 0_owner_group_other



int main()
{
	char Fname[20];
	int fd=0;  //file discripter
	
	printf("Enter name to create\n");
	scanf("%s",Fname);
	
	fd=creat(Fname,0777);
	
	if(fd== -1)
	{
		printf("unable to create file\n");
		return -1;    //failure
	}
	printf("file sucessfully created...\n",fd);
	
	
	return 0;
}