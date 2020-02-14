#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int max_so_far=0;
	int max_end_here=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		max_end_here=max_end_here+ar[i];
		if(max_end_here<0)
		{
			max_end_here=0;
		}
	   else if(max_so_far<max_end_here)
		{
			max_so_far=max_end_here;
		}
		
	}
	cout<<"maxximum contigious array sum is :: "<<max_so_far<<endl;
}
