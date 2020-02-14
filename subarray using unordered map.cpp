#include<bits/stdc++.h>
using namespace std;
void subArray(int ar[],int n,int sum)
{
	int curr_sum=0;
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++)
	{
		curr_sum=curr_sum+ar[i];
		if(curr_sum==sum)
		{
			cout<<0<<i<<endl;
			return ;
		}
		if(map.find(curr_sum-sum)!=map.end())
		{
			cout<<map[curr_sum-sum]+1<<i<<endl;
			return ;
		}
		
		map[curr_sum]=i;
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int ar[n];
	int sum;
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	subArray(ar,n,sum);
		
	}
	
}
