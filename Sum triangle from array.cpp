#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
vector<vector<int>> vt;
vector<int> v;
void f(vector<int> a, vector<vector<int>> &vt, vector<int> &v, int index){
	if(index  < 1)
		return;
	else{
		vt.push_back(v);
		for(int i = 0 ; i < index-1; ++i){
			v[i] = v[i] + v[i+1];
		}
		v.pop_back();
		f(a, vt, v, index-1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> a = {1, 2, 3, 4, 5};
	vector<int> v(a);
	vector<vector<int>> vt;
	f(a, vt, v, v.size());
	for(int i = vt.size()-1 ; i >= 0; --i){
		string s;
		s.push_back('[');
		for(int j = 0 ; j < vt[i].size(); ++j){
			s += to_string(vt[i][j]) + ", ";
		}
		s.erase(s.end()-2, s.end());
		s.push_back(']');
		cout<<s;
		cout<<endl;
	}
	return 0;
}


