////ACCEPT STRING RETURN COUNT OF SMALL CHARACTERS


#include<stdio.h>

int CountsmallR(char *str)
{
	static int icnt=0;
	
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			icnt++;
		}
		str++;
		
		CountsmallR(str);
		
	}
	return icnt;
}
int main()
{
	int iret=0;
	char arr[20];
	printf("Enter string: ");
	scanf("%[^'\n']s",arr);
	
	iret=CountsmallR(arr);
	
	printf("small characters are: %d",iret);
	
	return 0;
}