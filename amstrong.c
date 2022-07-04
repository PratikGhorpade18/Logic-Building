//check weathe AMSTRONG or not   

#include<stdio.h>
#include<stdbool.h>




bool CheckAmstrong(int ino)
{
	int itemp=0;
	int idigcnt=0,idigit=0,isum=0,icnt=0, imult=0;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	itemp=ino;
	
	while(ino!=0)
	{
		
		idigcnt++;		
		ino=ino/10;
	}
	ino=itemp;
	
	
	while (ino!=0)
	{
		imult=1;
     idigit= ino%10;
	    for(icnt=1;icnt<=idigcnt;icnt++)                                  
	   {
		imult = imult * idigit;
	
	    }
		
		isum=isum+ imult;
     ino=ino/10;
	}	 

if(isum==itemp)
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
	
	printf("Enter the number: ");
	scanf("%d",&ivalue);
	
	bret=CheckAmstrong(ivalue);
	
	if(bret==true)
	{
		 printf("  NUMBER IS AMSTRONG:  ",bret);
	}
	else{
		
	 printf("NUMBER IS  NOT  AMSTRONG:  ",bret);
	}
	
	return 0;
}