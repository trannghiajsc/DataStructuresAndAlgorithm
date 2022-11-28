#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, s;
	cin>>n>>s;
	int count = 0;
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= n; ++j){
			if(s-(i+j) <= n && s-(i+j) >= 0){
				cout<<i<<" "<<j<<" "<<s-(i+j)<<endl;
				++count;
			}
		}
	}
	cout<<count;
	return 0;
}


