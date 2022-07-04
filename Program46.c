//Accept number and count no of digits

#include<stdio.h>

int CountDigits(int ino)
{
	int icnt=0;
	
	if (ino<0)
	{
	ino=-ino;
	}
	
  while(ino>0)                                      //////  TIME COMPLEXITY-  O(N) /////
  {
	  icnt++;
	  ino=(ino/10);
	  
  }
  return icnt;
}

int main()
{
int ivalue=0;
int iret=0;
printf("Enter the number: ");
scanf("%d",&ivalue);

iret=CountDigits(ivalue);
printf("no of digitd:%d",iret);

return 0;
}