#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*next;
	node()
	{
		node(0);
	}
	node(int key)
	{
		data=key;
		next=NULL;
	}
};
node *rearrange(node*root)
{
	node*ptr=root,*prev=NULL,*nxt=NULL;
	node dummy;
	node*even=&dummy;
	while(ptr!=NULL)
	{
		prev=ptr;
		nxt=ptr->next;
		ptr->next=nxt->next;
		even->next=nxt;
		even=even->next;
		ptr=ptr->next;
	}
	prev->next=dummy.next;
	return root;
}
int main()
{
	node*root=new node(10);
	root->next=new node(11);
	root->next->next=new node(12);
	root->next->next->next=new node(13);
	root->next->next->next->next=new node(14);
	node*result=NULL;
	result=rearrange(root);
	while(result!=NULL)
	{
		cout<<result->data<<"\t";
		result=result->next;
	}
	return 0;
}
