///////////////Accept number and dispalys its NONfactors/////////////////


#include<stdio.h>


void DisplayNONFactors(int iNo)
{
	int icnt=0;
	if(iNo<0)
	{
     iNo=-iNo;
	}
	
	for(icnt=1;icnt<=iNo; icnt++ )
	{                                                                                   ////time COMPLEXITY  =  o(N)
		if((iNo%icnt)!=0)
		{
			printf("%d\n",icnt);
	    }
	}
	
}

int main()
{

   int ivalue=0;
   
printf("Enter the number\n");
scanf("%d",&ivalue);

DisplayNONFactors(ivalue); 
return 0;
}
