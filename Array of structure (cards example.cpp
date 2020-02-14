#include<bits/stdc++.h>
using namespace std;
struct card
{
	int face;
	int shape;
	int color;
};
int main()
{
	struct card deck[52];
	
	cin>>deck[0].face;
	cin>>deck[0].shape;
	cin>>deck[0].color;
	
	if(deck[0].face==1 && deck[0].shape==0 && deck[0].color==0)
	{
		cout<<"Selected card is :: "<<"A "<<"club of "<<"black colour ."<<endl;
	}
	
}
