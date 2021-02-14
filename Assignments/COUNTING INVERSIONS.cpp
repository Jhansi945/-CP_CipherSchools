#include<bits/stdc++.h>
using namespace std;
int getcount(vector<int>v,int n)
{
	multiset<int>set1;
	set1.insert(v[0]);
	int count=0;
	multiset<int>::iterator itr;
	for(int i=1;i<n;i++)
	{
		set1.insert(v[i]);
		itr=set1.upper_bound(v[i]);
		count+=distance(itr,set1.end());
	}
	return count;
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
	cout<<getcount(v,n)<<endl;
	return 0;
}
