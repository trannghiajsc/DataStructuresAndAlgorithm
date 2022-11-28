#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> a = {2,7,3,2,6,2};
	int k = 4;
	vector<int> vt;
	deque<int> dq;
	for(int i = 0 ; i < a.size(); ++i){
		while(dq.size() && a[dq.back()] <= a[i])
			dq.pop_back();
		dq.push_back(i);
		if(dq.front() + k <= i)
			dq.pop_front();
		if(i >= k-1)
			vt.push_back(a[dq.front()]);
	}
	for(auto x : vt)
		cout<<x<<" ";
	return 0;
}


