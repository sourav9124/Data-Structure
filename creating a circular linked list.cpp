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
void Rdisplay(Node *h)
{
	static int flag=0;
	if(h!=head || flag==0)
	{
		flag=1;
		cout<<h->data;
		Rdisplay(h->next);
		
	}
	flag=0;
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
	Rdisplay(head);cout<<endl;
	Display(head);
	
}
