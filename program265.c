///ACEEPT NUMBER AND PERFORM ADDITION OF DIGITS

#include<stdio.h>


int SumR(int ino)
{
	 int idigit=0;
	static int isum=0;
	
	if(ino!=0)
	{
		idigit=ino%10;
		isum=isum+idigit;
        ino=ino/10;
		SumR(ino);
	}
 return isum;
}


int main()
{
	int ivalue=0;
	int iret=0;
	
	printf("Enter the number: ");
	scanf("%d",&ivalue);
	
	iret=SumR(ivalue);
	printf("Additon is :%d",iret);
	
	return 0;
}
	