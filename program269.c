//backtracking

 #include<stdio.h>

void Display(char *str)
{
	if(*str!='\0')
	{
	printf("%s\n",str);
		Display(str+1);//HEad recursion
		
		
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

