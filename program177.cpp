///ACCEPTE STRING FROM USER AND COUNT NO OF small CHARACTER FROM STRING


#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))          //if((*str>=97)&&(*str<=122))
		{
			icnt++;
		}
		str++;
	}
	
	return icnt;
}

int main()
 {
   char Arr[20];
   int iret=0;
   cout<<"Enter the string: ";
   cin.getline(Arr,20);                   //scanf("%[^'\n']",Arr);
   
   iret= CountSmall(Arr);
  cout<<"count of capital character is : "<<iret;
   return 0;
   
   }


