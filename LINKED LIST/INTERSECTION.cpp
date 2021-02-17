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
void print(node*a)
{
	while(a!=NULL)
	{
		cout<<a->data<<"\t";
		a=a->next;
	}
	cout<<endl;
}
int count(node*a)
{
	node*temp=a;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
int checkhelper(node*a,node*b,int d)
{
	node*p1=a;
	node*p2=b;
	for(int i=0;i<d;i++)
	{
		if(p1==NULL)
		{
			return -1;
		}
		
		p1=p1->next;
	}
	while(p1!=NULL && p2!=NULL)
	{
		if(p1==p2)
		{
			//cout<<p1->data<<"\t";
			return p1->data;
		}
		p1=p1->next;
		p2=p2->next;
	}
	return -1;
}
void checkpoint(node*a,node*b)
{
	int p=0;
	int count1=count(a);
	int count2=count(b);
	int d=count1-count2;
	if(d>0)
	{
	   	p=checkhelper(a,b,d);
	}
	else
	{
		p=checkhelper(b,a,-d);
	}
	cout<<p<<endl;
}
int main()
{
	node* newNode;
	node* head1 = new node(10);
	node* head2 = new node(3);
	newNode = new node(6);
    head2->next = newNode;
	newNode = new node(9);
    head2->next->next = newNode;
	newNode = new node(15);
    head1->next = newNode;
    head2->next->next->next = newNode;
	newNode = new node(30);
	head1->next->next = newNode;
	head1->next->next->next = NULL;
	print(head1);
	print(head2);
	checkpoint(head1,head2);
	return 0;
}
