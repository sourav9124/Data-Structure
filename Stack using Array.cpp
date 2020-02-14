#include<bits/stdc++.h>
using namespace std;
struct stack 
{
    int size;
	int top;
	int *s;
	
};
int main()
{

	
}
void create(struct stack *st)
{
	printf("Enter the size");
	cin>>st->size;
	st->top=-1;
	st->s=new int[st->size];
	
}
void display(struct stack st)
{
	for(int i=top;i>=0;i--)
	{
		cout<<st.s[i];
	}
	
}
void push(struct stack *st,int x)
{
	if(st>top==st->size-1)
	{
		cout<<"Stack is full"<<endl;
	}
	else
	{
		st->top++;
		st->s[st->top]=x;
	}
}
int pop(struct stack *st)
{
	int x;
	if(st->top==-1)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		x=st->s[st->top];
		st->top--;
		
	}
	return x;
}
int main()
{
	struct stack st;
	create(&st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	display(st);
}



