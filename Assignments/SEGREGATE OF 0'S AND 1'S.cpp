#include<bits/stdc++.h>
using namespace std;
void segregate(vector<int>&v,int n)
{
	int i=0,j=n-1;
	while(i<j)
	{
		if(v[i]==1)
		{
			swap(v[i],v[j]);
			j--;
		}
		else
		{
			i++;
		}
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
	segregate(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
