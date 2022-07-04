///Accept number and dispalys its factors


#include<stdio.h>


void DisplayFactors(int iNo)
{
	int icnt=0;
	if(iNo<0)
	{
     iNo=-iNo;
	}
	
	for(icnt=1;icnt<=(iNo/2); icnt++ )
	{                                                                                   ////time COMPLEXITY  =  o(N/2)
		if((iNo%icnt)==0)
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

DisplayFactors(ivalue); 
return 0;
}
