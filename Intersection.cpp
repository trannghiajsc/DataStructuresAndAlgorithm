#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> A = {1, 2, 3, 4, 5}, B = {2, 3, 5, 9};
	if(A.empty() || B.empty())
        cout<<"rong 1";
    vector<int> vt;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0, j = 0;
    while(i < A.size() && j < B.size()){
        if(A[i] == B[j]){
        	vt.push_back(A[i]);
        	++i;
        	++j;
		}
        else if(A[i] < B[j])
         	++i;
        else
         	++j;
    }
    if(vt.empty()) cout<<"Rong 2";
    for(auto &x : vt)
    	cout<<x<<" ";
	return 0;
}


