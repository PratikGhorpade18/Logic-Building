//Accept number and CHECK WEATHER IT IS PALINDROME OR NOT

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int ino)

{     int itemp=0;
     int idigit=0;
	 int irev=0;
	 
	 if(ino<0)
	 {
		 ino=-ino;
	 }
	 
	 itemp=ino;
	 
	  while(ino>0)                                      /////  TIME COMPLEXITY-  O(N) /////
  {
	  idigit=(ino%10);
	  
	     irev=irev*10+idigit;
	  
	  ino=(ino/10);
  }
  
	 if(irev==itemp)
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
bool iret=false;


printf("Enter the number: ");
scanf("%d",&ivalue);

iret=CheckPalindrome(ivalue);


if(iret==true)
{
 printf(" %d IS PALINDROME\n",ivalue);
 }
 else
 {
 printf(" %d IS NOT PALINDROME\n",ivalue);
 }

return 0;
}