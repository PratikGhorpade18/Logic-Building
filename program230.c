//RECURSION
//* *   *  *  
#include<stdio.h>

void DisplayI()
{
auto int icnt=0;
while(icnt<4)
{
printf("*\t");
icnt++;
}
}


void DisplayR()
{
static int icnt=0;
if(icnt<4)
{
printf("*\t");
icnt++;
DisplayR();
}
}


int main()
{
  DisplayI();
  DisplayR();
  return 0;
  }
  