#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
/*
aabbcd
abf
*/
int solve(int n, int m, string a, string b){
	if(n < 0 || m < 0)
		return 0;
	if(a[n] == b[m])	return 1 + solve(n-1, m-1, a, b);
	else	return max(solve(n-1, m, a, b), solve(n, m-1, a, b));
}
int main()
{
	ios_base::sync_with_stdio(0);
	string a = "aabbcd", b = "abf";
	int n = a.size()-1, m = b.size()-1;
	cout<<solve(n, m, a, b);
	return 0;
}


