#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int temp)
{
	if(s.empty())
	{
		s.push(temp);
	}
	else
	{
	int temp1=s.top();
	s.pop();
	insert(s,temp);
	s.push(temp1);
    }
}
void reverse(stack<int>&s)
{
	if(!s.empty())
	{
	int temp=s.top();
	s.pop();
	reverse(s);
	insert(s,temp);
    }
}
void print(stack<int>s)
{
	while(!s.empty())
	{
		int top=s.top();
		s.pop();
		cout<<top<<"\t";
	}
	cout<<endl;
}
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	print(s);
	reverse(s);
	print(s);
	return 0;
}
