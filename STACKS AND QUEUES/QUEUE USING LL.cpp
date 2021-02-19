#include<bits/stdc++.h>
using namespace std;
struct qnode
{
	int data;
	qnode*next;
	qnode(int d)
	{
		data=d;
		next=NULL;
	}
};
struct Queue
{
	qnode*front,*rear;
	Queue()
	{
		front=rear=NULL;
	}
	void enqueue(int x)
	{
		qnode*temp=new qnode(x);
		if(rear==NULL)
		{
			front=rear=temp;
			return;
		}
		rear->next=temp;
		rear=temp;
	}
	void dequeue()
	{
		if(front==NULL)
		{
			return;
		}
		qnode*temp=front;
		front=front->next;
		if(front==NULL)
		{
			rear=NULL;
		}
		delete(temp);
	}
};
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.dequeue();
	q.dequeue();
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	cout<<(q.front)->data<<endl;
	cout<<(q.rear)->data<<endl;
	return 0;
}
