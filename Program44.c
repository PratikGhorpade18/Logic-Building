////////INPUT- 2   4                       
/////////OUTPUT- 16

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Power(int ino1,int ino2)
{
	ULONG lmult=1;
	register int icnt=0;
	
	for(icnt=1;icnt<=ino2;icnt++)                                  
	{
		lmult = lmult * ino1;
	
	}	
return lmult;
}
	

int main()
{
auto int ivalue1=0;
auto int ivalue2=0;
ULONG lret=0;
printf("Enter Base  : ");
scanf("%d",&ivalue1);

printf("Enter Power : ");
scanf("%d",&ivalue2);

lret=Power(ivalue1,ivalue2);

printf("result  is : %ld",lret);

return 0;
}