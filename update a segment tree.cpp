#include<bits/stdc++.h>
using namespace std;
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
}

