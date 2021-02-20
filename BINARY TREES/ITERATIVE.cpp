void inorder(node*root)
{
	stack<node*>s;
	node*curr=root;
	while(curr!=NULL || s.empty()==false)
	{
		while(curr!=NULL)
		{
			s.push(curr);
			curr=curr->left;
		}
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
	}
}
void preorder(node*root)
{
	stack<node*>s;
	node*curr=root;
	while(curr!=NULL || s.empty()==false)
	{
		while(curr!=NULL)
		{
			cout<<curr->data<<" ";
			if(curr->right)
			{
				s.push(curr->right);
			}
			curr=curr->left;
		}
		if(s.empty()==false)
		{
			curr=s.top();
			s.pop();
		}
	}
}
