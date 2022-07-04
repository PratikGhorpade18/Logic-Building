//Accept number and REVERSE IT

#include<stdio.h>

int Reverse(int ino)
{
     int idigit=0;
	 int irev=0;
	 
	  while(ino>0)                                      //////  TIME COMPLEXITY-  O(N) /////
  {
	  idigit=(ino%10);
	  
	     irev=irev*10+idigit;
	  
	  ino=(ino/10);
  }
	 return irev;
}

int main()
{
int ivalue=0;
int iret=0;
printf("Enter the number: ");
scanf("%d",&ivalue);

iret=Reverse(ivalue);
printf("REVERSE NUMBER  IS : %d",iret);

return 0;
}