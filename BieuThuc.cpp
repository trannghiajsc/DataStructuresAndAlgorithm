#include<bits/stdc++.h>

/*
5 1
5 25 25 25 1
*/
using namespace std;
string solve(int n, int k){
	int a[n];
	string s;
	for(int i = 0 ; i < n; ++i){
		a[i] = i+1;
	}
	int i = 1;
	do{
		if(i == k){
			for(int j = 0 ; j < n; ++j){
				s += to_string(a[j]);
			}
			break;
		}
		else
			++i;
	}while(next_permutation(a, a + n));
	return s;
}
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(0) ; cout.tie(0);
	int n, k;
	cin>>n;
	cin>>k;
	cout<<solve(n, k);
	return 0;
}
/* Main() Ends Here */


