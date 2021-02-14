#include<bits/stdc++.h>
using namespace std;
void find(vector<int>v,int n)
{
	int missing=0;
	for(int i=0;i<n;i++)
	{
		missing=missing^(i+1)^v[i];
	}
	missing=missing^(n+1);
	cout<<missing<<endl;
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
	find(v,n);
	return 0;
}
