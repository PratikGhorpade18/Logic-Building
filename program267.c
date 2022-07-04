//backtracking

 #include<stdio.h>

void Display(char *str)
{
	if(*str!='\0')
	{
		Display(str+1);//HEad recursion
		printf("%c\n",*str);
		
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter a string: ");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}