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
struct linkedlist
{
	node*head;
	linkedlist()
	{
		head=NULL;
	}
	void push(int key)
	{
		node*temp=new node(key);
		temp->next=head;
		head=temp;
	}
	bool palinhelper(node**left,node*right)
	{
		if(right==NULL)
		{
			return true;
		}
		bool is=palinhelper(left,right->next);
		if(is==false)
		{
			return false;
		}
		bool ch=(right->data==(*left)->data);
		*left=(*left)->next;
		return ch;
	}
	bool checkpalin()
	{
		palinhelper(&head,head);
	}
};
int main()
{
	linkedlist l;
	l.push(1);
	l.push(2);
	l.push(1);
	l.push(2);
	l.push(1);
	if(l.checkpalin())
	{
		cout<<"its s palindrome"<<endl;
	}
	else
	{
		cout<<"its not a palindrome"<<endl;
	}
	return 0;
}
