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
void check(node*root)
{
	node*slow=root;
	stack<int>s;
	while(slow!=NULL)
	{
		s.push(slow->data);
		slow=slow->next;
	}
	while(root!=NULL)
	{
		int i=s.top();
		s.pop();
		if(root->data!=i)
		{
			cout<<"not a palindrome"<<endl;
		}
		else
		{
			cout<<"is a palindrome"<<endl;
		}
	}
}
int main()
{
	node*root=new node(1);
	root->next=new node(2);
	root->next->next=new node(3);
	root->next->next->next=new node(2);
	root->next->next->next->next=new node(1);
	check(root);
	return 0;
}
