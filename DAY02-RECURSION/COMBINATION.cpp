#include<bits/stdc++.h>
using namespace std;
void makecomb(vector<vector<int>>&ans,vector<int>&temp,int n,int a,int k)
{
	if(k==0)
	{
		ans.push_back(temp);
		return;
	}
	for(int i=a;i<=n;i++)
	{
		temp.push_back(i);
		makecomb(ans,temp,n,i+1,k-1);
		temp.pop_back();
	}
}
vector<vector<int>> makecom(int n,int k)
{
	vector<vector<int>>ans;
	vector<int>temp;
	makecomb(ans,temp,n,1,k);
	return ans;
}
int main()
{
	int n=5;
	int k=3;
	vector<vector<int>>ans=makecom(n,k);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

