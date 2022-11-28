#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;

struct tui{
	int mass;
	int value;
};
/*
6
1 2
3 9
5 5
7 8
9 10
11 12
10
*/
int main()
{
 	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	tui *list = new tui[n+1];
	for(int i = 1; i <= n; ++i){
		cin>>list[i].mass>>list[i].value;
	}
	int m;
	cin>>m;
	int **a = new int*[n+1];
	for(int i = 0 ; i <= n; ++i){
		a[i] = new int[m+1];
	}
	for(int i = 0 ; i <= m; ++i){
		a[0][i] = 0;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 0;j <= m; ++j){
			a[i][j] = a[i-1][j];
			if(list[i].mass <= j){
				a[i][j] = max(a[i][j], a[i-1][j-list[i].mass]+list[i].value);
			}
		}
	}
	cout<<endl;
	for(int i = 0; i <= n; ++i){
		for(int j = 0;j <= m; ++j){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
	int temp = m, cnt = 0;
	for(int j = n; j >= 1; --j){
		if(a[j][temp] != a[j-1][temp] && j-1 >= 0 && temp > 0){
			++cnt;
			cout<<endl<<j<<" "<<list[j].mass<<" "<<list[j].value<<endl;
			temp = temp-list[j].mass;
		}
	}
	cout<<cnt;
	cout<<endl<<a[n][m];
	return 0;
}
/* Main() Ends Here */


