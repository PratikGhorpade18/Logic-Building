
//123
//3 2  1
//RECURSION

#include<stdio.h>

void DisplayI(int no)
{
auto int icnt=0;
while(no!=0)
{
printf("%d\t",no%10);
no=no/10;


}
}


void DisplayR(int no)
{
	auto int icnt=0;
    if(no!=0)
    {
     printf("%d\t",no%10);
      no=no/10;

DisplayR(no);
}
}


int main()
{
  DisplayI(123);
  DisplayR(234);
  return 0;
  }
  