 #include"header163.h"
 
 DoublyCLL::DoublyCLL()
{
	head=NULL;
	tail=NULL;
	countnode=0;
}

void DoublyCLL::InsertFirst(int ino)
{
	PNODE newn=NULL;
	newn= new NODE;

newn->data=ino;
newn->next=NULL;
newn->prev=NULL;

if(countnode==0)           // ((head==NULL)&&(tail==NULL))   //LL empty
 {
    head=newn;
	tail=newn;
 }
 else
 {
	newn->next=head;
    head->prev=newn;
    head=newn;	
 }
 
 head->prev=tail;
 tail->next=head;
 
countnode++;	
}


void DoublyCLL::InsertLast(int ino)
{
	PNODE newn=NULL;
	newn= new NODE;

newn->data=ino;
newn->next=NULL;
newn->prev=NULL;

if(countnode==0)           // ((head==NULL)&&(tail==NULL))   //LL empty
 {
    head=newn;
	tail=newn;
 }
 else
 {
    tail->next=newn;
	newn->prev=tail;
    tail=newn;	
 }
 
 head->prev=tail;
 tail->next=head;
 
countnode++;
}


void DoublyCLL::InsertAtPos(int ino,int pos)
{
	
	if((pos<1)||(pos>countnode+1))
	{
		cout<<"invalid position\n";
		return;
	}
	if(pos==1)
	{
		InsertFirst(ino);
	}
	else if(pos==countnode+1)
	{
		InsertLast(ino);
	}
	else{
		PNODE newn=NULL;
	newn= new NODE;

    newn->data=ino;
    newn->next=NULL;
    newn->prev=NULL;
	
	PNODE temp=head;
	
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
     newn->next=temp->next;
	 temp->next->prev=newn;
	 temp->next=newn;
	 newn->prev=temp;
	 
	}
	countnode++;	
}

void DoublyCLL::DeleteFirst()
{
	
if(countnode==0)
   {
	return;
	
   }
elseif(countnode==1)
  {
     delete head;
     head=NULL; 
      tail=NULL;	 
  }
  else
  {
	 head=head->next;	 
	 delete tail->next;   //delete head->prev
	  
  }
  head->prev=tail;
 tail->next=head;
 
  countnode--;
}


void DoublyCLL::DeleteLast()
{
	if(countnode==0)
   {
	return;
	
   }
elseif(countnode==1)
  {
     delete head;
     head=NULL; 
      tail=NULL;	 
  }
  else
  {
	 tail=tail->prev;
	 delete tail->next;
	  
  }
  head->prev=tail;
  tail->next=head;    //delete head->prev;
 
  countnode--;
}

void DoublyCLL::DeleteAtPos(int pos)
{
	if((pos<1)||(pos>countnode))
	{
		cout<<"invalid position\n";
		return;
	}
	if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==countnode+1)
	{
		DeleteLast();
	}
	else{
		
		for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
      temp->next=temp->next->next;
	   delete temp->next;                // delete temp->next->prev;
	  temp->next->next->prev=temp->next;  //temp->next->prev=temp;
	 
	}
	countnode--;	
		
	}
}

void DoublyCLL::Display()
{
	int i=0;
	PNODE temp=head;
	
	for(i=1;i<=countnode;i++)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	
	cout<<"\n";
}

int DoublyCLL::Count()
{
	return countnode;
}