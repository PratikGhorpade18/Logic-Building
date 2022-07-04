//////ACCEPT N NUMBER AND PERFORM ADDITION OF N NUMBERRS///

#include<stdio.h>
#include<stdlib.h>

int Add(int Arr[],int ilength)
{
	register int icnt=0;
	auto int isum=0;
	
	for(icnt=0;icnt<ilength;icnt++)
	{
		isum=isum+Arr[icnt];
	}
	return isum;
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
  
  iret=Add(ptr,isize);
  printf("Addition is: %d",iret);
  
  free(ptr);
  return 0;
}