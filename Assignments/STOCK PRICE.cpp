#include<bits/stdc++.h>
using namespace std;
void stock(vector<int>v,int n)
{
	int minval=v[0],profit=0;
	for(int i=1;i<n;i++)
	{
		if(minval<=v[i])
		{
			int temp=v[i]-minval;
			profit=max(profit,temp);
		}
		else
		{
			minval=v[i];
		}
	}
	cout<<profit<<endl;
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
	stock(v,n);
	return 0;
}
