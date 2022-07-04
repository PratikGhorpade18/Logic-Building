///ACCEPTE STRING FROM USER AND CONVERT IT INTO UPPER CASE


#include<iostream>
using namespace std;

void struprx(char str[])
{
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))        
		{
			*str= *str-32;
		}
		str++;
	}
	

}

int main()
 {
   char Arr[20];
   
   cout<<"Enter the string: ";
   cin.getline(Arr,20);                   //scanf("%[^'\n']",Arr);
   
   struprx(Arr);
  cout<<"string in upper case  is : "<<Arr;
   return 0;
   
   }