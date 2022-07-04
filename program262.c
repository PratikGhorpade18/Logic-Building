//Accept ARRAY AND ADD ALL NUMBERS               //RECURSION   //WITHOUT OPTIMIZATION

#include<stdio.h>

	
  int SumR(int Arr[],int isize)
{
    static int i=0;
   static int isum=0;

  if(i<isize)
 {
  isum=isum+Arr[i];
  i++;
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