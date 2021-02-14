#include<bits/stdc++.h>
using namespace std;
void find(vector<int>v,int n,int k)
{
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{
		cout<<v[i]<<" ";
	}
} //O(nlogn)

// its better to use minheap

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int k;
	cin>>k;
	find(v,n,k);
	return 0;
}
