#include <bits/stdc++.h>
using namespace std;
struct mystack
{
	stack<int>s;
	int minele;
	void getmin()
	{
		if(s.empty())
		{
			cout<<"stack is empty"<<endl;
			return;
		}
		else
		{
			cout<<"min element is"<<minele<<endl;
		}
	}
	void peek()
	{
		if(s.empty())
		{
			cout<<"stack is empty"<<endl;
			return;
		}
		int t=s.top();
		cout<<"top element is"<<((t<minele)?minele:t)<<endl;
	}
	void pop()
	{
		if(s.empty())
		{
			cout<<"tsack is empty"<<endl;
			return;
		}
		int t=s.top();
		s.pop();
		if(t<minele)
		{
			cout<<minele<<"\n";
			minele=2*minele-t;
		}
		else
		{
			cout<<t<<endl;
		}
	}
	void push(int x)
	{
		if(s.empty())
		{
			minele=x;
			s.push(x);
			cout<<"inserted element is"<<x<<"\n";
			return;
		}
		if(x<minele)
		{
			s.push(2*x-minele);
			minele=x;
		}
		else
		{
			s.push(x);
		}
		cout<<x<<endl;
	}
	
};
int main()
{
	mystack s;
	s.push(3);
	s.push(5);
	s.getmin();
	s.push(2);
	s.push(1);
	s.getmin();
	s.pop();
	s.getmin();
	s.pop();
	s.peek();
	return 0;
}
