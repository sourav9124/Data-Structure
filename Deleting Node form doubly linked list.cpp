#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
struct Node *t,*last;
int i;
first=new Node;
first->data=A[0];
first->prev=first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=new Node;
t->data=A[i];
t->next=last->next;
t->prev=last;
last->next=t;
last=t;
}
}
void Display(struct Node *p)
{
	while(p)
	{
	    cout<<p->data<<endl;
		p=p->next;	
	}
	
}
int length(struct Node *p)

{
	int l=0;
	while(p)
	{
		l++;
		p=p->next;
	}
	return l;
}

int Delete(Node *p,int index)
{
	Node *q;
	int x=-1;
	if(index<1 || index > length(p))
	{
	   return -1;
	}
	if(index==1)
	{
		first=first->next;
		if(first)
		{
			first->prev=NULL;
		}
		x=p->data;
		free(p);
		
	}
	else
	{
		for(int i=0;i<index-1;i++)
		{
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next)
		{
			p->next->prev=p->prev;
			x=p->data;
			free(p);
		}
	}
}
void Reverse(Node *p)
{
	Node *temp;
	while(p!=NULL)
	{
	     temp=p->next;
	     p->next=p->prev;
	     p->prev=temp;
	     p=p->prev;
	     
	     if(p!=NULL && p->next==NULL)
	     {
	     	first = p;
	     	
		 }
	}
}
int main()
{
	int ar[]={10,20,30,40,50};
	create(ar,5);
	
//	Delete(first,3);
	
	//cout<<length(first)<<endl;
	Reverse(first);
	Display(first);
	
	return 0;
	
}
