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

int main()
{
	int ar[]={10,20,30,40,50};
	create(ar,5);
	
	
	cout<<length(first)<<endl;
	Display(first);
	
	return 0;
	
}
