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

node*get(node*a,node*b)
{
	node*result=NULL;
	if(a==NULL)
	{
		return (b);
	}
	else if(b==NULL)
	{
		return (a);
	}
	if(a->data<=b->data)
	{
		result=a;
		result->next=get(a->next,b);
	}
	else
	{
		result=b;
		result->next=get(a,b->next);
	}
	return (result);
}
int main()
{
	node*root1=new node(10);
	root1->next=new node(14);
	root1->next->next=new node(16);
	root1->next->next->next=new node(18);
	node*root2=new node(2);
	root2->next=new node(3);
	root2->next->next=new node(12);
	node*result=get(root1,root2);
	while(result!=NULL)
	{
		cout<<result->data<<"\t";
		result=result->next;
	}
	return 0;
}
