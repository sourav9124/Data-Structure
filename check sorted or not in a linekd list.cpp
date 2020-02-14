
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

bool checksorted(struct Node *p)
{
	int x=INT_MIN;
	p=first;
	while(p!=NULL)
	{
		if(p->data<x)
		{
			return false;
			
		}
		x=p->data;
		p=p->next;
		
	}
	return true;
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
int A[]={10,2,20,30,40,50};
create(A,5);

cout<<checksorted(first);



//Display(first);
return 0;
}
