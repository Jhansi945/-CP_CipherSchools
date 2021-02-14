//Finding the peak element
#include<bits/stdc++.h>
using namespace std;
void findpeak(vector<int>v,int start,int end,int n)
{
	
	int k=(start+(end-start))/2;
	int mid=k;
	//checking if mid element is greater than its neightbour elements
	if((mid==0 || v[mid-1]<=v[mid]) && (mid==n-1 || v[mid+1]<=v[mid]))
	{
		cout<<v[mid]<<" ";
	}
	//if mid's left element is greater than the mid element
	//then peak eleement will be definitely at its left
	else if(mid>start && v[mid-1]>v[mid])
	{
		findpeak(v,start,(mid-1),n);
	}
	//else the peak element is definitely will be its right
	else
	{
		findpeak(v,(mid+1),end,n);
	}
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
	int start=0;
	int end=n-1;
	findpeak(v,start,end,n);
	return 0;
}
