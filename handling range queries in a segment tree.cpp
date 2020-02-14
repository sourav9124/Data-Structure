#include<bits/stdc++.h>
using namespace std;
int query(int* tree,int start,int end,int treeNode,int left,int right)
{
	//completely outside the given range
	
	if(start >right || end <left)
	{
		return 0;
	}
	

	
	//completely inside the given range
	
	if(start >= left && end <=right)
	{
		return tree[treeNode];
	}
	
	//partially inside and outside the given range
	
		int mid=(start+end)/2;
	int ans1=query(tree,start,mid,2*treeNode,left,right);
	int ans2=query(tree,mid+1,end,2*treeNode+1,left,right);
	
	return ans1+ans2;
}
void updateTree(int* ar,int* tree,int start,int end,int treeNode,int idx,int value)
{
	//Base case
	if(start==end)
	{
		ar[idx]=value;
		tree[treeNode]=value;
		return;
		
	}
	
	
	int mid=(start+end)/2;
	if(idx>mid)
	{
		updateTree(ar,tree,mid+1,end,2*treeNode+1,idx,value);
	}
	else
	{
		updateTree(ar,tree,start,mid,2*treeNode,idx,value);
	}
	tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}
void buildTree(int* ar,int* tree,int start,int end,int treeNode)
{
	if(start==end)
	{
		tree[treeNode]=ar[start];
		return;
	}
	int mid=(start+end)/2;
	
	buildTree(ar,tree,start,mid,2*treeNode);
	buildTree(ar,tree,mid+1,end,2*treeNode+1);
	
	tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
	 
	
}
int main()
{
	int ar[]={1,2,3,4,5};
	int *tree=new int[10];
	
	buildTree(ar,tree,0,4,1);
	
	updateTree(ar,tree,0,4,1,2,10);
	for(int i=1;i<10;i++)
	{
		cout<<tree[i]<<endl;
	}
	int ans=query(tree,0,4,1,2,4);
	cout<<"Sum between the interval is :: "<<ans<<endl;
}

