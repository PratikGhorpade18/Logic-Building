///6     A B C D E F

#include<stdio.h>


void DisplayR(int ino)
{
	static char ch='A';
	
	
	 if(ino>0)
	{
		
		printf("%c\t",ch);    
		ch++;
		ino--;
		DisplayR(ino);
	}

}


int main()
{
	int ivalue=0;
	
	
	printf("Enter the number: ");
	scanf("%d",&ivalue);
	
	DisplayR(ivalue);

	
	return 0;
}