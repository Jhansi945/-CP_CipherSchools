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
void get(priority_queue<int>&pq,node*root1,node*root2)
{
	while(root1!=NULL)
	{
		pq.push(root1->data);
		root1=root1->next;
	}
	while(root2!=NULL)
	{
		pq.push(root2->data);
		root2=root2->next;
	}
}
void push(node**result,int data)
{
	node*temp=new node(data);
	temp->next=(*result);
	(*result)=temp;
}
int main()
{
	node*root1=new node(10);
	root1->next=new node(14);
	root1->next->next=new node(16);
	root1->next->next->next=new node(18);
	node*root2=new node(2);
	root2->next=new node(12);
	root2->next->next=new node(3);
	priority_queue<int>pq;
	get(pq,root1,root2);
	node*result=NULL;
	while(!pq.empty())
	{
		
		push(&result,pq.top());
		pq.pop();
	}
	
	while(result!=NULL)
	{
		cout<<result->data<<"\t";
		result=result->next;
	}
	return 0;
}
