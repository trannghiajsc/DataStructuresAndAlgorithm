#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>


using namespace std;
vector<int> vt;
vector<int> a;
void f(int start, vector<int> vt, vector<int> &a, int end, int index,  int r){
	if(index == r){
		for(auto x : a)
			cout<<x<<" ";
		cout<<endl;
		return;
	}
	else{
		for(int i = start ; i <= end-r+index+1 ; ++i){
			a[index] = vt[i];
			f(i+1, vt, a, end, index+1, r);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n, r;
	cin>>r>>n;
	vector<int> vt(n);
	for(int i = 0 ; i < n; ++i) vt[i] = i+1;
	for(int i = 1; i <= n; ++i){
		vector<int> a(i);
		cout<<endl<<"Voi i = "<<i<<": "<<endl;
		f(0, vt, a, vt.size()-1, 0, i);
	}
	return 0;
}


