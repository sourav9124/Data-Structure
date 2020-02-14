
#include <bits/stdc++.h>  
using namespace std;



struct Node
{
int data;
struct Node *next;
}*first=NULL,*third=NULL,*second=NULL;
void create(int A[],int n)
{
int i;
struct Node *t,*last;
first=new Node;
first->data=A[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=new Node;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}

void create2(int A[],int n)
{
int i;
struct Node *t,*last;
second=new Node;
second->data=A[0];
second->next=NULL;
last=second;
for(i=1;i<n;i++)
{
t=new Node;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}





}

void merge(Node *p,Node *q)
{
	Node *last;
	
	if(p->data<q->data)
	{
		third=last=p;
		p=p->next;
		last->next=NULL;
	}
	else
	{
		third=last=q;
		q=q->next;
		last->next=NULL;
	}
	
	while(p!=NULL && q!=NULL)
	{
		if(p->data<q->data)
		{
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}
		else
		{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	}
	if(p!=NULL)
	{
		last->next=p;
	}
	else
	{
		last->next=q;	
	}
}
void Display(struct Node *p)
{
while(p!=NULL)
{
	cout<<p->data<<endl;
    p=p->next;
}
}




int main()
{
	

int A[]={10,20,30,40,50};
int B[]={1,15,25,35,45};



create(A,5);
create2(B,5);

merge(first,second);
Display(third);
return 0;
}
