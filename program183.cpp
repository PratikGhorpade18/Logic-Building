///ACCEPTE STRING FROM USER AND Reverse IT


#include<iostream>
using namespace std;

void strrevx(char str[])
{
	char *start=str;
	char *end =str;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;	
	
	while(start<= end)
	{
		temp= *start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
		
}

int main()
 {
   char Arr[20];
   
   cout<<"Enter the string: ";
   cin.getline(Arr,20);                   //scanf("%[^'\n']",Arr);
   
   strrevx(Arr);
  cout<<"reversed string is  is : "<<Arr;
  
   return 0;  
 }