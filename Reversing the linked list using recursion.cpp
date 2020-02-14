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

//Recursive function to display the elements in the the normal straight order
//void display(struct Node *p)
//{
//	if(p != NULL)
//	{
//		cout<<p->data<<endl;
//		display(p->next);
//	}
//}

//Recursive function to display the elements in the the reverse order
void display(struct Node *p)
{
	if(p != NULL)
	{
		display(p->next);
		cout<<p->data<<endl;
		
	}
}

int main()
{
	int ar[]={10,20,30,40,50};
	create(ar,5);
	display(first);
	
	
}
