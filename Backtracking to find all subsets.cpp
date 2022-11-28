#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
vector<int> vt;
vector<int> a;
void f(int index, int n, vector<int> &a, vector<int> vt){
	for(auto x : a)
			cout<<x<<" ";
	cout<<endl;
	for(int i = index; i < n; ++i){
		a.push_back(vt[i]);
		f(i+1, n, a, vt);
		a.pop_back();
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> vt(n);
	vector<int> a;
	for(int i = 0 ; i < n; ++i){
		vt[i] = i+1;
	}
	f(0, n, a, vt);
	return 0;
}


