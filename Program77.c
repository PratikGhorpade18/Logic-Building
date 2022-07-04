////ACCEPT N NUMBERS AND ALSO ACCEPT ONE NUMBER AND RETURN INDEX OF FIRST OCCURANCE  OF THAT NUMBER FROM ARRAY////           

#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int ilength,int ino)
{
	register int icnt=0;
	   
	for(icnt=0;  icnt<ilength;icnt++)
	{ 	
		if(Arr[icnt]==ino)
		{	
			break;
		} 	
	}
	if(icnt==ilength)
	{
		return -1;
	}
	else 
	{
		return icnt;
	}
	
}

int main()
{
	auto int isize=0;
	register int icnt=0;
	auto int iret=0;
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
  
  iret=FirstOcc(ptr,isize,ivalue);
  
  if(iret==-1)
  {
 printf("THERE IS NO SUCH ELEMENT IN ARRAY\n");
  }
  else
  {
	printf("INDEX OF FIRST OCCURANCE IS AT: %d",iret);  
  }  
  free(ptr);
  return 0;
}