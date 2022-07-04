///ACCEPTE two STRING FROM USER AND concanicate  them


#include<iostream>
using namespace std;

void strcatx(char *src,char *dest)
{
	while(*dest!='\0')
	{
	   dest++;
	   }
	   
	   while(*src!='\0')
	   {
	     *dest=*src;
		 dest++;
		 src++;
		 }
		 *dest='\0';
		
}

int main()
 {
   char Arr[20];
   char Brr[20];
   
   cout<<"Enter the string: ";
   cin.getline(Arr,20); 

    cout<<"Enter the string: ";
   cin.getline(Brr,20); 
   
   strcatx(Arr,Brr);
  cout<<"concatinated string   is : "<<Brr;
  
   return 0;  
 }