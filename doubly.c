#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;   ///* navin
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void Display(PNODE head)
{   
printf("\nElements in LL are: ");
    while(head!=NULL)
	{
		printf(" %d ",head->data);
        head=head->next;
	   
	}
	}


int Count(PNODE head)
{
	 int icnt=0;
	while(head!=NULL)
	{
		icnt++;
       head=head->next;
	   
	}
	return icnt;
}


void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;     //* navin
	
	if(*head==NULL)     //if empty
	{
		*head=newn;
	}
	else                //if LL at least one
	{
		newn->next=(*head);
		(*head)->prev=newn;   //newn->next->prev=newn;     //*navin
		*head=newn;
	}
}



void InsertLast(PPNODE head,int no)
{
	PNODE temp=NULL;
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;     //* navin
	
	if(*head==NULL)     //if empty
	{
		*head=newn;
	}
	else                //if LL at least one
	{
		temp= (*head);
		while(temp->next!=NULL)
		{
           temp=temp->next;
		}
        temp->next=newn;
		
		newn->prev=temp;   //* navin    //temp->next->prev=temp;
		
	}	
	
}



void DeleteFirst(PPNODE head)
{
	if(*head==NULL)    //empty
	{
		return;
	}
  else if((*head)->next==NULL)    //at least one node
	{
		free(*head);
		*head=NULL;
	}
	else                            //more than one 
	{
		*head=(*head)->next;     //navin
   		free((*head)->prev);    //navin
		(*head)->prev=NULL;     //navin
		
	}
		
}




void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)    //empty
	{
		return;
	}
  else if((*head)->next==NULL)    //at least one node
	{
		free(*head);
		*head=NULL;
	}
	else                           //more then one 
	{
		temp= *head;
		
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
	
}


void InsertAtPos(PPNODE head,int no,int pos)
{
	 
	PNODE newn=NULL;
	PNODE temp=NULL;
	int size=0,icnt=0;
    size=Count(*head);
   
   if((pos<0)||(pos>(size+1)))
   {
	   printf("invalid position");
	   return;
   }
   
   if(pos==1)
   {
	   InsertFirst(head,no);
   }
   else if(pos==(size+1))
   {
	   InsertLast(head,no);
   }
   else
   {   
    
	temp=*head;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

  
	   for(icnt=1;icnt<pos;icnt++)
	   {
		   temp=temp->next;
	   }
	   
	   newn->next=temp->next;   //500 chya next madhe 400 takayche
	   temp->next->prev=newn; 
	   temp->next=newn;
	   newn->prev=temp;
   }
}



void DeleteAtPos(PPNODE head ,int pos)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	int size=0,icnt=0;
    size=Count(*head);
   
   if((pos<0)||(pos>size))
   {
	   printf("invalid position");
	   return;
   }
   
   if(pos==1)
   {
	   DeleteFirst(head);
   }
   else if(pos==size)
   {
	   DeleteLast(head);
   }
   else
   {   
    
	temp=*head;
	newn=(PNODE)malloc(sizeof(NODE));
	
	
	newn->next=NULL;
	newn->prev=NULL;

  
	   for(icnt=1;icnt<pos;icnt++)
	   {
		   temp=temp->next;
	   }
	   temp->next=temp->next->next;
	   free(temp->next);
	   temp->next->next->prev=temp->next;
	
   }
}





int main()
{
	PNODE first=NULL;
	
	int iret=0;
	
	printf("\n**Insert First**: ");
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,11);
	InsertFirst(&first,1);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	printf("\n**Insert Last**: ");
	InsertLast(&first,121);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	printf("\n**Delete First**: ");
	DeleteFirst(&first);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	printf("\n**Delete Last**: ");
	DeleteLast(&first);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	printf("\n**Insert At position**: ");
	InsertAtPos(&first,21,2);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	printf("\n**Delete At Position**: ");
	DeleteAtPos(&first,4);
	Display(first);
	iret=Count(first);
	printf("\nNO OF NODE ARE: %d\n",iret);
	
	
	return 0;
}
