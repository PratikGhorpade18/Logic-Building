///ACCEPTE STRING FROM USER AND COUNT NO OF CAPITAL CHARACTER FROM STRING


#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))          //if((*str>=65)&&(*str<=90))
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
   
   iret= CountCapital(Arr);
  cout<<"count of capital character is : "<<iret;
   return 0;
   
   }


