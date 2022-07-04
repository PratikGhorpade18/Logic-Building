///ACCEPTE STRING FROM USER AND COUNT NO OF vowels FROM STRING


#include<iostream>
using namespace std;

int Vowels(char str[])
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if((*str=='a') ||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A') ||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))       
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
   
   iret= Vowels(Arr);
  cout<<"count of vowels is : "<<iret;
   return 0;
   
   }

