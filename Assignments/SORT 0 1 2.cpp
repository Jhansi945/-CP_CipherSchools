#include<bits/stdc++.h>
using namespace std;
void segregation(vector<int>&v,int n)
{
	int i=0,c0=0,c1=0,c2=0;
	for(i=0;i<n;i++)
	{
		switch(v[i])
		{
			case 0:
				c0++;
				break;
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
		}
	}
	i=0;
	while(c0>0)
	{
		v[i++]=0;
		c0--;
	}
	while(c1>0)
	{
		v[i++]=1;
		c1--;
	}
	while(c2>0)
	{
		v[i++]=2;
		c2--;
	}
	
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
	segregation(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
