#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int l, r, count = 0;
	cin>>l>>r;
	bool check[100001];
	memset(check, true, sizeof(check));
	check[1] = false;
	for(int i = 2;  i*i <= r; ++i){
		if(check[i] == true){
			for(int j = i*i; j <= r; j+=i){
				check[j] = false;
			}
		}
	}
	for(int i = l; i <= r; ++i){
		if(check[i] == true && check[i+4] == true && i+4 <= r)
                ++count;
	}		
	cout<<count;
	return 0;
}


