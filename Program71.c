             ///////ACCEPT NUMBERS AND COUNT EVEN NUMBERS/////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	auto int icnt=0;
	register int ievecnt=0;
	printf("Even elements are:");
	for(icnt=0;icnt<iLength;icnt++)
	{
		if((Arr[icnt]%2)==0)
		{
		ievecnt++;
		}
	}
	return ievecnt;
}

int main()
{	
   auto int isize=0;
   int	icnt=0;
   int *ptr=NULL;
   int iret=0;
   
   printf("Enter number of elements: ");
   scanf("%d",&isize);
   
   ptr=(int*)malloc (isize*sizeof(int));
   
   printf("Enter values of array: \n");
   for(icnt=0;icnt<isize;icnt++)
   {
	   scanf("%d",&ptr[icnt]);
   }
   
  iret= CountEven(ptr,isize);
   printf("NUMBER OF EVEN ELEMENTS ARE : %d",iret);
   free(ptr);
   return 0;   
}
   