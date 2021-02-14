//Finding Majority element in an array
#include<bits/stdc++.h>
using namespace std;
int getmajority(vector<int>v,int n)
{
	int maj=0,count=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[maj]==v[i])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			maj=i;
			count=1;
		}
	}
	return v[maj];
}
bool ismajority(vector<int>v,int n)
{
	int x=getmajority(v,n);
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==x)
		{
			count++;
		}
	}
	if(count>(v.size())/2)
	{
		return true;
	}
	return false;
}
int main()
{
	//taking the size of a vector from the user
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	if(ismajority(v,n))
	{
		cout<<"Majority element is "<<getmajority(v,n)<<endl;
	}
	else
	{
		cout<<"No majority element"<<endl;
	}
	return 0;
}
