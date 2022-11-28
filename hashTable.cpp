#include <bits/stdc++.h>

using namespace std;
/* clang-format on */
/* Main()  function */
const int base = 31;
const long long mod = 1e9+7;
long long hasha[1000007];
long long Pow[1000007];

long long gethash(int i, int j){
	return (hasha[j] - hasha[i-1]*Pow[j-i+1] + mod*mod)%mod;
}
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(0) ; cout.tie(0);
	string a, b;
	cin>>a>>b;
	int x = a.size();
	int y = b.size();
	a = " " + a;
	b = " " + b;
	Pow[0] = 1;
	hasha[0] = 0;
	long long hashb = 0;
	for(int i = 1; i <= x; ++i){
		hasha[i] = (hasha[i-1]*base + a[i] - 'a' + 1)%mod;
		Pow[i] = (Pow[i-1]*base) % mod;
	}
	for(int i = 1; i <= y; ++i){
		hashb = (hashb*base + b[i]- 'a' + 1)%mod;
	}
	for(int i = 1; i <= x-y+1; ++i){
		if(hashb == gethash(i, i + y-1))
			cout<<i<<" ";
	}
	return 0;
}
/* Main() Ends Here */


