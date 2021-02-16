#include<bits/stdc++.h>
using namespace std;
void find(int n)
{
	int count=0;
	for(int i=5;n/i>=1;i*=5)
	{
		count+=n/i;
	}
	cout<<count;
}
int main()
{
	int n;
	cin>>n;
	find(n);
	return 0;
}
