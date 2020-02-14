#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
	
}*head;
void create(int ar[],int n)
{
	  int i;
	  struct Node *t,*last;
	  head=new Node;
	  head->data=ar[0];
	  head->next=head;
	  last=head;
	  
	  for(i=1;i<n;i++)
	  {
	  	t=new Node;
	  	t->data=ar[i];
	  	t->next=last->next;
	  	last->next=t;
	  	last=t;
	  }
	  
	  
}

void Insert(int pos,int x)
{
	Node *p,*t;
	int i;
	if(pos==0)
	{
		t=new Node;
		t->data=x;
		if(head == NULL)
		{  
		   
		   head=t;
		   head->next=head;	
		}
		else
		{
			p=head;
			while(p->next!=head)
			{
				p=p->next;
			}
			p->next=t;
			t->next=head;
			head=t;
			
		   	
		}
	}
	else
	{
		     p=head;
		     for(int i=0;i<pos-1;i++)
		     {
		     	p=p->next;
			 }
			 t=new Node;
			 t->data=x;
			 t->next=p->next;
			  p->next=t;
			 
	}
}

void Display(Node *h)
{
	do{
		
		cout<<h->data<<endl;	
		h=h->next;
		
		
	}while(h!=head);
	
	
}
int main()
{
	int ar[]={2,3,4,5,6};
	create(ar,5);
	Insert(3,100);cout<<endl;
	Display(head);
	
}
