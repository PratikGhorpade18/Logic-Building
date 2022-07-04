///input :7856
//output::6  5   8   7


#include<stdio.h>

void DisplayDigits(int ino)
{
	int idigit=0;
	
	if (ino<0)
	{
	ino=-ino;
	}
	
  while(ino>0)                                      //////  TIME COMPLEXITY-  O(N) /////
  {
	  idigit=(ino%10);
	  printf(" %d ",idigit);
	  ino=(ino/10);
  }
  
}

int main()
{
int ivalue=0;
printf("Enter the number: ");
scanf("%d",&ivalue);

DisplayDigits(ivalue);

return 0;
}