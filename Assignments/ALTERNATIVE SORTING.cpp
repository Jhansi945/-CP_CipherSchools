#include<bits/stdc++.h>
using namespace std;
void find(vector<int>&v,int n)
{
	sort(v.begin(),v.end());
	int i=0,j=n-1;
	while(i<j)
	{
		cout<<v[j--]<<" "<<v[i++]<<" ";
	}
	//if size is odd print middle element
	if(n%2!=0)
	{
		cout<<v[i];
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
	find(v,n);
	
	return 0;
}
