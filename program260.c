//ACCEPT NUMBER AND FIND  FACTORIAL  //4   4*3*2*1 =24    ///without recursion

#include<stdio.h>

int Factorial(int ino)
{
	
	int ifact=1;
	
	while(ino>0)
	{
		
		ifact=ifact*ino;
		ino--;
	}
	
	return ifact;
}




int main()
{

int ivalue=0;
int iret=0;

printf("Enter the number: ");
scanf("%d",&ivalue);

iret=Factorial(ivalue);

printf("factorial is : %d",iret);

return 0;

}