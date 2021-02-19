#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*link;
};
struct node*top;
void push(int data)
{
	node*temp;
	temp=new node();
	if(!temp)
	{
		cout<<"heap overflow"<<endl;
		exit(1);
	}
	temp->data=data;
	temp->link=top;
	top=temp;
}
int isempty()
{
	return top==NULL;
}
int peek()
{
	if(!isempty())
	{
		return top->data;
	}
	else
	{
		exit(1);
	}
}
void pop()
{
	node*temp;
	if(top==NULL)
	{
		cout<<"stack underflow"<<endl;
		exit(1);
	}
	else
	{
		temp=top;
		top=top->link;
		temp->link=NULL;
		free(temp);
	}
}
void display()
{
	node*temp;
	if(top==NULL)
	{
		cout<<"stack underflow"<<endl;
		exit(1);
	}
	else
	{
		temp=top;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->link;
		}
	}
}
int main()
{
	push(11);
	push(22);
	push(33);
	push(44);
	display();
	cout<<peek()<<endl;
	pop();
	pop();
	display();
	cout<<peek()<<endl;
	return 0;
}
