#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

vector<int> a = {14,6,6,6,3,18,14,18,17,7,10,13,3,8,6,8,11,10,7,10};
vector<int> vt(a.size(), 1);
int longestArray(std::vector<int> a)
{
	sort(a.begin(), a.end());
	for(int i = 1 ; i < a.size(); ++i){
		for(int j = i-1; j >= 0; --j){
			if(__gcd(a[i], a[j]) > 1){
				vt[i] = max(vt[i], vt[j]+1);
			}
		}
	}
	int nn = INT_MIN;
	for(auto x : vt){
		nn = max(nn, x);
	}
	return nn;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cout<<longestArray(a);
	return 0;
}


