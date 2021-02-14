#include<bits/stdc++.h>
using namespace std;
void contigoussum(vector<int>v,int n)
{
	int maxsofar=0,end=0;
	int start=0,m=0;
	for(int i=0;i<n;i++)
	{
		end=end+v[i];
		if(end<0 && i<n-2)
		{
			end=0;
			start=i+1;
		}
		else if(end<0 && i<n)
		{
			end=0;
		}
		if(maxsofar<end)
		{
			maxsofar=end;
			m=i;
		}
		
		
	}
	cout<<maxsofar<<" "<<start<<" "<<m<<endl;
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
	contigoussum(v,n);
	return 0;
}
