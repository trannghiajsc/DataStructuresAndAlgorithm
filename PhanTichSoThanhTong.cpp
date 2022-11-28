#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;
void dp(int n, int m){
	int **f = new int*[m+1];
	for(int i = 0; i <= m; ++i)
		f[i] = new int[n+1];
	f[0][0] = 1;
	for(int i = 1; i <= n; ++i)
		f[0][i] = 0;
	for(int i = 1; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (j < i) {
			f[i][j] = f[i-1][j];
			}
			else {
			f[i][j] = f[i-1][j] + f[i][j-i];
			}
		}
	}
	cout<<"tong = "<<f[m][n]<<endl;
	for(int i = 0 ; i <= n; ++i)
		delete []f[i];
	delete []f;
}
int sum = 0;
void backtrack(int j, int t, int n, int m, int *a){
	for(int i = t; i <= m; ++i){
		if(sum + i <= n){
			a[j] = i;
			sum += a[j];
			if(sum == n)
			{
				cout<<a[0];
				for(int k = 1; k <= j; ++k){
					cout<<" + "<<a[k];
				}
				cout<<endl;
			}
			else{
				backtrack(j+1, i, n, m, a);
			}
			sum-= a[j];
		}
	}
}
int main()
{
 	ios_base::sync_with_stdio(false);
	int n, m;
	cin>>n>>m;
	int *a = new int[n+1];
	backtrack(0, 1, n, m, a);
	delete []a;
	dp(n, m);
	return 0;
}
/* Main() Ends Here */


