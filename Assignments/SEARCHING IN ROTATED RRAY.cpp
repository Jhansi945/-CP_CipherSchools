#include<bits/stdc++.h>
using namespace std;
int find(vector<int> vec, int start, int end){
    
    if (start  > end)
        return -1;
    if (start == end)
        return start;
    int mid = start + (end - start)/2;
    if (mid < end && vec[mid] >= vec[mid + 1]) {
        return mid;
    }

    if (start < mid && vec[mid - 1] >= vec[mid]) {
        return mid - 1;
    }

    if (vec[start] <= vec[mid]) {
        // first segment is sorted
        return find(vec, mid + 1, end);
    } else {
        // second segment is sorted
        return find(vec, start, mid - 1);
    }
}

int main()
{
    vector<int> vec = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4};
	cout<<find(vec,0,vec.size()-1)<<endl;
	return 0;	
}
