#include<bits/stdc++.h>
using namespace std;
struct Node 
{
	int data;
	struct Node *next;
}*first=NULL;//first node pointer is null

void create(int ar[],int n)
{
	struct Node *t,*last;

	
	first=new Node;
	first->data=ar[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=ar[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node *p)
{
	while(p != NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}

int main()
{
	int ar[]={10,20,30,40,50};
	create(ar,5);
	display(first);
	
	
}
