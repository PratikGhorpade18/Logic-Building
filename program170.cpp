 ///count no of letters in string
 
 
 #include<iostream>
 using namespace std;
 
 
 int strlenx(char *str)
 { 
    int icnt=0;
  while(*str!='\0')  
   {
	   str++;
	   icnt++;
   }
   return icnt;
 }
 
 
 int main()
 {
   char Arr[20];
   int iret=0;
   cout<<"Enter the string: ";
   cin.getline(Arr,20);                   //scanf("%[^'\n']",Arr);
   
   iret=strlenx(Arr);
  cout<<"count is : "<<iret;
   return 0;
   
   }