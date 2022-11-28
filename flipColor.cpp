#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	std::vector<int> color = {0, 1, 1, 0, 0, 1, 0}, t = {1};
	vector<int> faker(color.size(), 0);
	for(int i = 0 ; i < t.size(); ++i){
		faker[t[i]] += 1;
	}
	if(faker[0]&1) color[0] = !color[0];
	for(int i = 1 ; i < color.size(); ++i){
		faker[i] += faker[i-1];
		if(faker[i]&1) color[i] = !color[i];
	}
	for(auto &x : faker)
		cout<<x<<" ";
		cout<<endl;
	for(auto &x : color)
		cout<<x<<" ";
	return 0;
}


