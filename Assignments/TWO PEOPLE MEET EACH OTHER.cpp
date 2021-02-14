// To find if 2 people starting from different positions meet each other or not
#include<bits/stdc++.h>
using namespace std;
bool meet(int p,int q,int x,int y)
{
	//always the speed of a person at a position
	//before other person is smaller then return false
	if(p<q && x<=y)
	{
		return false;
	}
	if(p>q && x>=y)
	{
		return false;
	}
	if(p<q)
	{
		swap(p,q);
		swap(x,y);
	}
	//if relative speed is a factor of relative distance or not
	return ((p-q) % (x-y)==0);
}
int main()
{
	//taking inputs from the user 
	int p,q,x,y;
	cin>>p>>q>>x>>y;
	if(meet(p,q,x,y))
	{
		cout<<"yes they meet each other"<<endl;
	}
	else
	{
		cout<<"no they dont meet each other"<<endl;
	}
	return 0;
}
