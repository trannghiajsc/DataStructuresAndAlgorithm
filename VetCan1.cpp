#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
vector<int> subset;
int n = 3;
void search (int k){
	if (k == n){
		for(int i = 0 ; i < subset.size(); ++i){
			cout<<subset[i];
		}
		cout<<endl;
	} else {
		search(k+1);
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	search(0);
	return 0;
}


