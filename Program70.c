                ///////ACCEPT NUMBERS AND DSPLAY EVEN NUMBERS/////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	auto int icnt=0;
	printf("Even elements are:");
	for(icnt=0;icnt<iLength;icnt++)
	{
		if((Arr[icnt]%2)==0)
		{
		printf(" %d ",Arr[icnt]);
		}
	}
}

int main()
{	
   auto int isize=0;
   int	icnt=0;
   int *ptr=NULL;
   
   printf("Enter number of elements: ");
   scanf("%d",&isize);
   
   ptr=(int*)malloc (isize*sizeof(int));
   
   printf("Enter values of array: \n");
   for(icnt=0;icnt<isize;icnt++)
   {
	   scanf("%d",&ptr[icnt]);
   }
   
   DisplayEven(ptr,isize);
   
   free(ptr);
   return 0;   
}
   