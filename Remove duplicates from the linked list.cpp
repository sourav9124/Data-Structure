
#include <bits/stdc++.h>  
using namespace std;



struct Node
{
int data;
struct Node *next;
}*first=NULL;
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
void Display(struct Node *p)
{
while(p!=NULL)
{
	cout<<p->data<<endl;
    p=p->next;
}
}
int count(struct Node *p)
{
	int l=0;
	while(p !=NULL)
	{
		++l;
		
		p=p->next;
		
	}
	return l;
}

void Insert(struct Node *p,int index,int x)
{
struct Node *t;
int i;
if(index < 0 || index > count(p))
return;
t=new Node;
t->data=x;
if(index == 0)
{
t->next=first;
first=t;
}
else
{
for(i=0;i<index-1;i++)
p=p->next;
t->next=p->next;
p->next=t;
}
}

void removeDuplicates()
{
    Node *p=first;
    Node *q=first->next;
    
    while(q!=NULL)
    {
    	if(p->data!=q->data)
    	{
    		p=q;
    		q=q->next;
		}
		else
		{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}
int main()
{
int A[]={10,10,10,40,50};
create(A,5);

removeDuplicates();




Display(first);
return 0;
}
