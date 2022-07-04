#include<stdio.h>                         //ACCEPT NUMBER AND FIND  FACTORIAL  //4   4*3*2*1 =24    /// recursion#include<stdio.h>
  
int FactorialR(int ino)
{	
	static int ifact=1;

	if(ino>0)
	{
		ifact=ifact*ino;
		ino--;
		FactorialR(ino);
	}	
	return ifact;
}

int main()
{
int ivalue=0;
int iret=0;

printf("Enter the number: ");
scanf("%d",&ivalue);

iret=FactorialR(ivalue);

printf("factorial is : %d",iret);

return 0;
}