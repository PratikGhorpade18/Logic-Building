////////////////////////////////////////////check weather number is prime or not   /////////////////

#include<stdio.h>
#include<stdbool.h>


int CountFactor(int ino)
{
	
	int ifacnt=0;
	int icnt=0;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	for(icnt=2;icnt<(ino/2);icnt++)
	{
		if(ino%icnt==0)
		{
			ifacnt++;
		}
	}
    return ifacnt;
}
  
	bool CheckPrime(int ino)
	{
		int iret=0;
		iret=CountFactor(ino);
		
		if(iret==0)
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
