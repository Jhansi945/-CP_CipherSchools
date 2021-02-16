#include<bits/stdc++.h>
using namespace std;
void find(string str,int k,string &max,int m)
{
	if(k==0)
	{
		return;
	}
	int n=str.length();
	char maxm=str[m];
	for(int j=m+1;j<n;j++)
	{
		if(maxm<str[j])
		{
			maxm=str[j];
		}
	}
	if(maxm!=str[m])
	{
		--k;
	}
	for(int j=m;j<n;j++)
	{
		if(str[j]==maxm)
		{
			swap(str[m],str[j]);
			if(str.compare(max)>0)
			{
				max=str;
			}
			find(str,k,max,m+1);
			swap(str[m],str[j]);
		}
		
	}
}
int main()
{
	string s;
	cin>>s;
	int k=5;
	string max=s;
	find(s,k,max,0);
	cout<<max<<endl;
	return 0;
}
