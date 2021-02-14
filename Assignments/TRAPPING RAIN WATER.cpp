#include<bits/stdc++.h>
using namespace std;
void find(vector<int>v,int n)
{
	int k=0;
	int left=0,right=0;
	int l=0,h=n-1;
	while(l<=h)
	{
		if(v[l]<v[h])
		{
			if(v[l]>left)
			{
				left=v[l];
			}
			else
			{
				k+=left-v[l];
			}
			l++;
		}
		else
		{
			if(v[h]>right)
			{
				right=v[h];
			}
			else
			{
				k+=right-v[h];
			}
			h--;
		}
	}
	cout<<k;
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
