////ACCEPT N NUMBERS AND ALSO ACCEPT ONE NUMBER AND CHECK FREQUENCY OF THAT NUMBER IN ARRAY AND RETURN  FREQUENCY (COUNT ) /////

#include<stdio.h>
#include<stdlib.h>

int SameNumber(int Arr[],int ilength,int ino)
{
	register int icnt=0;
	auto int ifreq=0;
	
	

	for(icnt=0;icnt<ilength;icnt++)
	{
		 	
		if(Arr[icnt]==ino)
		{
			ifreq++;
		} 
	}	return ifreq;
}

int main()
{
	auto int isize=0;
	register int icnt=0;
	auto int iret=0;
	int *ptr=NULL;
	int ivalue=0;
	
	
   printf("Enter the Number of elements are : ");
   scanf("%d",&isize);
   
  ptr=(int *) malloc(isize*sizeof(int));
  
  printf("Enter elements of array:\n");
  for(icnt=0;icnt<isize;icnt++)
  {
	  scanf("%d",&ptr[icnt]);
  }
  
  printf("Enter the number to calculate frequency: ");
	scanf("%d",&ivalue);
  
  iret=SameNumber(ptr,isize,ivalue);
  printf(" NUMBER of frequency is : %d",iret);
  
  
  free(ptr);
  return 0;
}