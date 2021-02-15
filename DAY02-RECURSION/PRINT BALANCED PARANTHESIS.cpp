#include<bits/stdc++.h>
using namespace std;
void balanced(vector<string>&result,int open,int close,int n,string str)
{
	if(open<0 || close<0 || open>n || close>n || close>open)
	{
		return;
	}
	if(open==n && close==n)
	{
		result.push_back(str);
		return;
	}
	balanced(result,open+1,close,n,str+"(");
	balanced(result,open,close+1,n,str+")");
}
vector<string> balancedparan(int n)
{
	vector<string>result;
	balanced(result,0,0,n," ");
	return result;
}
int main()
{
	vector<string>result=balancedparan(2);
	for(string res:result)
	{
		cout<<res<<endl;
	}
	return 0;
}
