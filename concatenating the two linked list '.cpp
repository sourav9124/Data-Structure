
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

void concat(Node *p,Node *q)
{
	third=p;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	
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
int B[]={1,2,3,4,5};



create(A,5);
create2(B,5);

concat(first,second);










//Display(first);
//Display(second);

cout<<endl;
Display(third);
return 0;
}
