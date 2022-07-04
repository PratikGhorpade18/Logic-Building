//Accept number and return sum of even digits

#include<stdio.h>

int SumEvenDigits(int ino)
{
     int idigit=0;
	int isum=0;
	
	if (ino<0)
	{
	ino=-ino;
	}
	
  while(ino>0)                                      //////  TIME COMPLEXITY-  O(N) /////
  { 
      
      idigit=(ino%10);
	  if((idigit%2)==0)
	  {
	    isum=isum+idigit;
	 }
	  ino=(ino/10);
  }
  return isum;
}

int main()
{
int ivalue=0;
int iret=0;
printf("Enter the number: ");
scanf("%d",&ivalue);

iret=SumEvenDigits(ivalue);
printf("ADDITION OF DIGITS IS : %d",iret);

return 0;
}