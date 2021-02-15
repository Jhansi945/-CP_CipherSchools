#include<bits/stdc++.h>
using namespace std;
const int noofchars=256;
string findsubstring(string str,string pat)
{
	int len1=str.length();
	int len2=pat.length();
	if(len1<len2)
	{
		cout<<"no such window exists"<<endl;
		return " ";
	}
	int hash_pat[noofchars]={0};
	int hash_str[noofchars]={0};
	for(int i=0;i<len2;i++)
	{
		hash_pat[pat[i]]++;
	}
	int start=0,start_index=-1,min_len=INT_MAX;
	int count=0;
	for(int j=0;j<len1;j++)
	{
		hash_str[str[j]]++;
		if(hash_str[str[j]]<=hash_pat[str[j]])
		{
			count++;
		}
		if(count==len2)
		{
			while(hash_str[str[start]]>hash_pat[str[start]] || hash_pat[str[start]]==0)
			{
				if(hash_str[str[start]]>hash_pat[str[start]])
				{
					hash_str[str[start]]--;
				}
				start++;
			}
			int len_window=j-start+1;
			if(min_len>len_window)
			{
				min_len=len_window;
				start_index=start;
			}
		}
	}
	if(start_index==-1)
	{
		cout<<"no such window exists";
		return " ";
	}
	return str.substr(start_index,min_len);
}
int main()
{
	string s1,pat;
	getline(cin,s1);
	getline(cin,pat);
	cout<<findsubstring(s1,pat);
	return 0;
}
