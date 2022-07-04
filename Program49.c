//Accept number and display  even digits

#include<stdio.h>

void DisplayEvenDigits(int ino)
{
     int idigit=0;
	int isum=0;
	
	if (ino<0)
	{
	ino=-ino;
	}
	
  while(ino>0)                                ////  TIME COMPLEXITY-  O(N) ////
  { 
      idigit=(ino%10);
	  if((idigit%2)==0)
	  {
	    	  printf(" %d ",idigit);
	 }
	  ino=(ino/10);
  }  
}

int main()
{
int ivalue=0;
printf("Enter the number: ");
scanf("%d",&ivalue);

DisplayEvenDigits(ivalue);

return 0;
}