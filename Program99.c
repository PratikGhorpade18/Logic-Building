//innput  rwo   4         col 4

/*//output   
             *
             *  *
             *  *  *
             *  *  *  *                                	 */

#include<stdio.h>

	void Display(int irow,int icol)
{
	register int icnt1=0;
	register int icnt2=0;
	
	if(irow!=icol)
	{
		return;
	}
	
	for(icnt1=1;icnt1<=irow;icnt1++)
	{
	for(icnt2=1;icnt2<=icnt1;icnt2++)         //WITH OPTIMIZATION
	{
		
			printf(" * ");
		
	}
	printf("\n");
}
}
int main()
{
	auto int ivalue1=0;
	auto int ivalue2=0;
	
	printf("Enter the number of Row: ");
	scanf("%d",&ivalue1);
	printf("Enter the number of Column: ");
	scanf("%d",&ivalue2);
	
	 Display(ivalue1,ivalue2);
	
	return 0;
}
