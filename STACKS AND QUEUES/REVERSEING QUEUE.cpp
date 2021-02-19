#include<bits/stdc++.h>
using namespace std;
void insert(queue<int>&q,int temp)
{
	if(q.empty() || q.front()<=temp)
	{
		q.push(temp);
	}
	else
	{
		int temp1=q.front();
		q.pop();
		insert(q,temp);
		q.push(temp1);
	}
}
void reverse(queue<int>&q)
{
	if(!q.empty())
	{
		int temp=q.front();
		q.pop();
		reverse(q);
		insert(q,temp);
	}
}
void print(queue<int>q)
{
	while(!q.empty())
	{
		cout<<q.front()<<"\t";
		q.pop();
	}
}
int main()
{
	queue<int>q;
	q.push(4);
	q.push(5);
	q.push(1);
	q.push(6);
	print(q);
	reverse(q);
	print(q);
	return 0;
}
