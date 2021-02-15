#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*fact(n-1);
}
int fib(int n,int a=0,int b=1)
{
	if(n==0)
	{
		return a;
	}
	if(n==1)
	{
		return b;
	}
	return fib(n-1,b,a+b);
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	cout<<fact(n)<<endl;
	return 0;
}
