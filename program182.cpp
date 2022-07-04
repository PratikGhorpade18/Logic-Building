///ACCEPTE STRING FROM USER AND TOGGLE IT


#include<iostream>
using namespace std;

void strtogglex(char str[])
{
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))        
		{
			*str= *str+32;
		}
		else if((*str>='a')&&(*str<='z'))        
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
   
   strtogglex(Arr);
  cout<<"toggled string is  is : "<<Arr;
   return 0;  
 }