///ACCEPTE two STRING FROM USER AND compare  them


#include<iostream>
using namespace std;

bool strcmpx(char *src,char *dest)
{
	
	while ((*src!='\0')&&(*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}
	
	if((*src=='\0')&&(*dest=='\0'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
 {
   char Arr[20];
   char Brr[20];
   bool bret=false;
   cout<<"Enter the string: ";
   cin.getline(Arr,20); 

    cout<<"Enter the string: ";
   cin.getline(Brr,20); 
   
   bret=strcmpx(Arr,Brr);
 if(bret==true)
 {
	 cout<<"strings are equal ";
 }
 else{
	 cout<<"strings are not equal ";
 }
 
   return 0;  
 }