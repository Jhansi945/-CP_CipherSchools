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
void deletenode(node**head,int key)
{
	node*temp=*head;
	node*prev=NULL;
	if(temp!=NULL && temp->data==key)
	{
		*head=temp->next;
		delete temp;
		return;
	}
	else
	{
		while(temp!=NULL && temp->data!=key)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		{
			return;
		}
		prev->next=temp->next;
		delete temp;
	}
}
void push(node**head,int key)
{
	node*temp=new node(key);
	temp->next=(*head);
	(*head)=temp;
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"\t";
		head=head->next;
	}
}
int main()
{
	node* head = NULL;
	push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    print(head);
    deletenode(&head,1);
    print(head);
    return 0;
 
}
