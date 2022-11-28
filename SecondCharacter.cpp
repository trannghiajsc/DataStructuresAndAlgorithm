#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
bool cmp(pair<char, int> &a, pair<char, int> &b){
	return a.second < b.second;
}
char secondChar(string s)
{
    map<char, int> mp;
	vector<pair<char, int>> vt;
	for(int i = 0 ; i < s.size(); ++i){
		mp[s[i]]++;
	}
	for(auto x : mp)
		vt.push_back(make_pair(x.first, x.second));
	sort(vt.begin(), vt.end(), cmp);
    if(vt.size() < 2)
        return '?';
    if(vt[vt.size()-2].second == vt[vt.size()-1].second || vt[vt.size()-2].second == vt[vt.size()-3].second)
        return '?';
	else return vt[vt.size()-2].first;
}//Tran Nghia
int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	cout<<secondChar(s);
	return 0;
}


