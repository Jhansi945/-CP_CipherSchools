#include<bits/stdc++.h>
using namespace std;
void find(string s)
{
	int result=0;
	for(int i=0;i<s.length();i++)
	{
		result*=26;
		result+=s[i]-'A'+1;
		
	}
	cout<<result<<endl;
}
int main()
{
	string s;
	cin>>s;
	find(s);
	return 0;
}
