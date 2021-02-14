#include<bits/stdc++.h>
using namespace std;
void minplatform(vector<int>&arr,vector<int>&dept)
{
	sort(arr.begin(),arr.end());
	sort(dept.begin(),dept.end());
	int i=1,j=0;
	int curr=1,minplat=1;
	while(i<arr.size() && j<dept.size())
	{
		if(arr[i]>=dept[j])
		{
			curr-=1;
			j++;
		}
		else
		{
			curr+=1;
			i++;
		}
		minplat=max(minplat,curr);
	}
	cout<<minplat<<endl;
}

int main()
{
	int n=6;
	//cin>>n;
	vector<int>arr={9-00, 9-40, 9-50, 11-00, 15-00, 18-00};
	vector<int>dept={9-10, 12-00, 11-20, 11-30, 19-00, 20-00};
	
	minplatform(arr,dept);
	return 0;
}
