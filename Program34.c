////////////////////////////////////////////Check weather number is prime or not   WITH OPTIMISATION/////////////////
#include<stdio.h>
#include<stdbool.h>

  
	bool CheckPrime(int ino)
	{
	int icnt=0;
    bool bflag=true;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	for(icnt=2;icnt<(ino/2);icnt++)
	{
		if(ino%icnt==0)
		{
			bflag= false;
		    break;
		}
	
	}
    return bflag;
		
	}

int main()
{
	int ivalue=0;
	bool bret=false;
	printf("\n ENTER YOUR NUMBER : ");
	scanf("%d",&ivalue);
	
	bret=CheckPrime(ivalue);
	if (bret==true)
	{
	printf("%d  is a prime number number",ivalue);
	}
	else{
		
	printf("%d  is not a prime number",ivalue);
	}
	return 0;
}
