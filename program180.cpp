///ACCEPTE STRING FROM USER AND CONVERT IT INTO LOWER CASE


#include<iostream>
using namespace std;

void strlwrx(char str[])
{
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))        
		{
			*str= *str+32;
		}
		str++;
	}
	

}

int main()
 {
   char Arr[20];
   
   cout<<"Enter the string: ";
   cin.getline(Arr,20);                   //scanf("%[^'\n']",Arr);
   
   strlwrx(Arr);
  cout<<"string in lower case  is : "<<Arr;
   return 0;
   
   }