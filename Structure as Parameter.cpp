#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
struct Rectangle2
{
	int ar[10];
	int n;
};
int area(struct Rectangle r1)
{
	return r1.length*r1.breadth;
}
int changeLength(struct Rectangle2 r2)
{
	r2.ar[0]=200;
//	return r2.ar[0];
  return  accumulate(r2.ar,r2.ar+r2.n,0);
}

int main()
{
	struct Rectangle r={10,5};
	struct Rectangle2 r2={{10,20,30,40,50},5};
	
	
	cout<<"The area of the rectangle is :"<<area(r)<<endl;
	
	cout<<"The change length of the rectangle 2 is :"<<changeLength(r2)<<endl;
	
	
	
}
