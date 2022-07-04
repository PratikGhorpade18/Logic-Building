////ACCEPT N NUMBERS AND RETURN LARGEST NUMBER FROM THAT NUMBER/////

#include<stdio.h>
#include<stdlib.h>

int MaxNumber(int Arr[],int ilength)
{
	register int icnt=0;
	auto int imax=Arr[0];
	

	for(icnt=0;icnt<ilength;icnt++)
	{
		 	
		if(Arr[icnt]>imax)
		{
			imax=Arr[icnt];
		} 
	}	return imax;
}

int main()
{
	auto int isize=0;
	register int icnt=0;
	auto int iret=0;
	int *ptr=NULL;
	
   printf("Enter the Number of elements are : ");
   scanf("%d",&isize);
   
  ptr=(int *) malloc(isize*sizeof(int));
  
  printf("Enter elements of array:\n");
  for(icnt=0;icnt<isize;icnt++)
  {
	  scanf("%d",&ptr[icnt]);
  }
  
  iret=MaxNumber(ptr,isize);
  printf("MAXIMUM NUMBER IS: %d",iret);
  
  
  free(ptr);
  return 0;
}