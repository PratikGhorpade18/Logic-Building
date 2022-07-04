///ACCEPT N NUMBERS AND ALSO ACCEPT ONE NUMBER AND CHECK WEATHER  NUMBER IS PRESENT IN ARRAY OR NOT  ////           

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int ilength,int ino)
{
	register int icnt=0;
	auto int ifreq=0;                                ////WITHOUT FLAG            
	   
	
	
	for(icnt=0;  icnt<ilength;icnt++)
	{
		 	
		if(Arr[icnt]==ino)
		{
			
			break;
		} 
		
	}
	if(icnt==ilength)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

int main()
{
	auto int isize=0;
	register int icnt=0;
	auto bool bret=false;
	int *ptr=NULL;
	auto int ivalue=0;
	
	
   printf("Enter the Number of elements are : ");
   scanf("%d",&isize);
   
  ptr=(int *) malloc(isize*sizeof(int));
  
  printf("Enter elements of array:\n");
  for(icnt=0;icnt<isize;icnt++)
  {
	  scanf("%d",&ptr[icnt]);
  }
  
  printf("Enter the number to search: ");
	scanf("%d",&ivalue);
  
  bret=Search(ptr,isize,ivalue);
  if(bret==true)
  {
	  printf("yes",bret);
  }
  else
  {
	  printf("no",bret);
  }
	    
  free(ptr);
  return 0;
}