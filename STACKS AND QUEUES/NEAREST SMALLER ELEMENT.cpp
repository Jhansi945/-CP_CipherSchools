#include<bits/stdc++.h>
using namespace std;
vector<int> prevSmaller(vector<int> &A) {
    vector<int> ans;
    ans.resize(A.size());

    stack<int> st;
    
    for (int i = 0; i < A.size(); i++) {
        while (!st.empty() && st.top() >= A[i]) st.pop();
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }
        st.push(A[i]);
    }
    return ans;
}
int main()
{
	vector<int>v={2,1,3,4,1};
	vector<int>v1=prevSmaller(v);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<"\t";
	}
	return 0;
}
