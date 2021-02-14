#include<bits/stdc++.h>
using namespace std;
pair<int,int> find(vector<vector<int>>v,int m,int key)
{
	int smallest=v[0][0],largest=v[m-1][m-1];
	pair<int,int>p;
	if(m==0)
	{
		p.first=-1;
		p.second=-1;
	}
	else if(key<smallest || key>largest)
	{
		p.first=-1;
		p.second=-1;
	}
	else
	{
	int i=0,j=m-1;
	bool visit=false;
	while(visit==false)
	{
		int k=v[i][j];
		if(k==key)
		{
			visit=true;
			continue;
		}
		else if(key<k)
		{
			j--;
		}
		else
		{
			i++;
		}
		p.first=i;
	p.second=j;
	}
    }
	
	return  p;
}
int main()
{
	int m=3;
	vector<vector<int> >v={{1,2,3},
	                        {4,5,6},
							{7,8,9}};
	
	int key;
	cin>>key;
	pair<int,int>p=find(v,m,key);
	cout<<p.first<<" "<<p.second<<endl;
	return 0;
}
