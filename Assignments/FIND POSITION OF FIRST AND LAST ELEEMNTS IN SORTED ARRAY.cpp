#include<bits/stdc++.h>
using namespace std;
int first(vector<int>v,int low,int high,int x,int n)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if((mid==0 || x>v[mid-1]) && (v[mid]==x))
		{
			return mid;
		}
		else if(x>v[mid])
		{
			return first(v,(mid+1),high,x,n);
		}
		else
		{
			return first(v,low,(mid-1),x,n);
		}
	}
	return -1;
}
int last(vector<int>v,int low,int high,int x,int n)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if((mid==n-1 || x<v[mid-1]) && (v[mid]==x))
		{
			return mid;
		}
		else if(x>v[mid])
		{
			return first(v,low,(mid-1),x,n);
		}
		else
		{
			return first(v,(mid+1),high,x,n);
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int x;
	cin>>x;
	int f=first(v,0,n-1,x,n);
	int l=last(v,0,n-1,x,n);
	cout<<"first position="<<f<<"last position="<<l<<endl;
	return 0;
}
