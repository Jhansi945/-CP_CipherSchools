#include<bits/stdc++.h>
using namespace std;
void printmatrix(vector<vector<int>> mat)
{
	int rs=0,re=mat.size()-1,cs=0,ce=mat[0].size()-1;
	while(rs<=re && cs<=ce)
	{
		for(int i=cs;i<=ce;i++)
		{
			cout<<mat[rs][i]<<" ";
		}
		rs++;
		for(int j=rs;j<=re;j++)
		{
			cout<<mat[j][ce]<<" ";
		}
		ce--;
		if(rs<=re)
		{
			for(int i=ce;i>=cs;i--)
			{
				cout<<mat[re][i]<<" ";
			}
			re--;
		}
		if(cs<=ce)
		{
			for(int j=re;j>=rs;j--)
			{
				cout<<mat[j][cs]<<" ";
			}
			cs++;
		}
	}
}
int main()
{
	vector<vector<int>> mat={{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
	printmatrix(mat);
	return 0;
}
