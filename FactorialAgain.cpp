#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int sqr(int x) {
    return x*x;
}

int pow(int a, int b, int MOD) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2)) % MOD;
        else
            return a * (sqr(pow(a, b/2)) % MOD) % MOD;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int t, n, p;
	cin>>t;
	while(t--){
		cin>>n>>p;
		cout<<((3*n)*pow(6, n, p))%p<<endl;	
	}
	return 0;
}


