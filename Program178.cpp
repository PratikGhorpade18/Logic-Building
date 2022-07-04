///ACCEPTE STRING FROM USER AND COUNT NO OF white spaces FROM STRING


#include<iostream>
using namespace std;

int WhilteSpace(char str[])
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')        
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
   
   iret= WhilteSpace(Arr);
  cout<<"count of white space  is : "<<iret;
   return 0;
   
   }

