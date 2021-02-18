#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*next;
	node(int key)
	{
		data=key;
		next=NULL;
	}
};
node*remove(node*root)
{
	if(root==NULL || root->next==NULL)
	{
		return root;
	}
	node*curr=root;
	node*prev=curr,*nxt=NULL;
	while(curr!=NULL)
	{
		while(curr->next!=NULL &&
		prev->next->data==curr->next->data)
		{
			curr=curr->next;
		}
		if(prev->next==curr)
		{
			prev=prev->next;
		}
		else
		{
			prev->next=curr->next;
		}
		curr=curr->next;
	}
	return root;
}
int main()
{
	node*root1=new node(10);
	root1->next=new node(14);
	//root1->next->next=new node(14);
	root1->next->next=new node(18);
	root1->next->next->next=new node(18);
	root1->next->next->next->next=new node(18);
	node*result=remove(root1);
	while(result!=NULL)
	{
		cout<<result->data<<"\t";
		result=result->next;
	}
	return 0;
}
