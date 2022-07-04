//Accept ARRAY AND ADD ALL NUMBERS               //RECURSION   // WIth OPTIMIZATION

#include<stdio.h>

	
  int SumR(int Arr[],int isize)
{
    
   static int isum=0;

  if(isize>0)
 {
  isum=isum+Arr[isize-1];
  
  isize--;
  
  SumR(Arr,isize);
 }
  return isum;
}  	


int main()
{
  int Brr[]={10,20,30,40};
  int iret=0;
  
  iret= SumR(Brr,4);
  printf("Addition is : %d",iret);
  
  return 0;
}