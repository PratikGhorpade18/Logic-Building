////////////////////////////////////////////////    Accept number return perfect number  WITH OPTIMISATION   /////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

int AddFactors(int ino)
{   
int isum=0;
	int icnt=0;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	for ((icnt=ino/2);(icnt<=(1))&&(isum<=ino);icnt--)
	{
		if((ino%icnt)==0)
		{
			isum=isum+icnt;
		}	
	}
	if(isum==ino)
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
	int ivalue=0;
	bool bret=false;
	printf("\n enter number");
	scanf("%d",&ivalue);
	
	bret=AddFactors(ivalue);
	if (bret==true)
	{
	printf("%d  is a perfect number",ivalue);
	}
	else
	{	
	printf("%d  is not a perfect number",ivalue);
	}
	return 0;
}