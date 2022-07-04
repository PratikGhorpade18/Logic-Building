///////////Accept number return addition of its factors

#include<stdio.h>

int AddFactors(int ino)
{   
int isum=0;
	int icnt=0;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	for (icnt=1;icnt<=(ino/2);icnt++)
	{
		if((ino%icnt)==0)
		{
			isum=isum+icnt;
		}
	}
	return isum;
	
}
	
	

int main()
{
	int ivalue=0;
	int iret=0;
	printf("\n enter number");
	scanf("%d",&ivalue);
	
	iret=AddFactors(ivalue);
	printf("additon of factors is:%d\n",iret);
	
	return 0;
}