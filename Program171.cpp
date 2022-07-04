///Accept string count occurance letter l


#include<iostream>
 using namespace std;
 
 
 int countl(char *str)
 { 
    int icnt=0;
  while(*str!='\0')  
   {
   if(*str=='l')
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
   
   iret=countl(Arr);
  cout<<"count of l is : "<<iret;
   return 0;
   
   }