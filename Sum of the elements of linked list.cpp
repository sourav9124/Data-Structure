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

//using normal method
//int Add(struct Node *p)
//{
//	int sum=0;
//	while(p)
//	{
//		sum=sum+(p->data);
//		p=p->next;
//		
//	}
//	return sum;
//}


//This is the function using recursion

int Add(struct Node *p)
{
	if(p==0)
	{
		return 0;
	}
	else
	{
		return Add(p->next)+p->data;
	}
}
int main()
{
	int ar[]={10,20,30,40,50};
	create(ar,5);
	cout<<Add(first);
	
	
}
