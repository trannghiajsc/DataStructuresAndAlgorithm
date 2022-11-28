#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
int n, m;
vector<vector<int>> matrix;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void dfs(int i, int j){
	matrix[i][j] = 1;
	for(int k = 0; k < 4; ++k){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < matrix.size() && j1 >= 0 && j1 < matrix[i].size() && matrix[i1][j1] == 0)
			dfs(i1, j1);
	}
}
/*int countingStar(vector<vector<int>> matrix)
{
	int count = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0 ; j < m; ++j){
			if(matrix[i][j] == 0){
				dfs(i, j);
				++count;
			}
	}
	}
	return count;
}*/
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>m;
/*
3 4
1 0 0 1
0 1 1 0
0 0 0 1
*/
/*
3 10
1 0 1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0 0 0
1 0 1 1 1 1 1 1 1 1
*/
	matrix.resize(n);
	for(int i = 0 ; i < n; ++i){
		matrix[i].resize(m);
		for(int j = 0 ; j < m; ++j){
			cin>>matrix[i][j];
		}
	}
	cout<<endl;
	for(int i = 0 ; i < n; ++i){
		for(int j = 0 ;j < m; ++j){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int count = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0 ; j < m; ++j){
			if(matrix[i][j] == 0){
				dfs(i, j);
				++count;
			}
		}
	}
	cout<<endl<<matrix.size()<<endl;
	cout<<endl<<matrix[0].size()<<endl;
	cout<<count;
	return 0;
}


