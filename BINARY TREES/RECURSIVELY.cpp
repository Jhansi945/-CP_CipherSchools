void preorder(node*root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node*root)
{
	if(root==NULL)
	{
		return;
	}
	
	preorder(root->left);
	cout<<root->data<<" ";
	preorder(root->right);
}
void postorder(node*root)
{
	if(root==NULL)
	{
		return;
	}
	
	preorder(root->left);
	preorder(root->right);
	cout<<root->data<<" ";
}
