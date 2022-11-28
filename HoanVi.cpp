#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
string s[5] = {"Nghia", "Duy", "Nam", "Phong", "Manh"};
void sinh(int n, int *a){
	int j;
	for(int i = 0; i < n; ++i)
		cout<<s[a[i]]<<"\t";
	cout<<endl;
	while(true){
		j = n-1;
		while(a[j-1] > a[j]){
			--j;
			if(j == 0)
				break;
		}
		if(j == 0)
			break;
		for(int i = n-1; i >= j; --i)
		{
			if(a[i] > a[j-1])
			{
				swap(a[i], a[j-1]);
				break;
			}
		}
		sort(a + j, a + n);
		for(int i = 0; i < n; ++i)
			cout<<s[a[i]]<<"\t";
		cout<<endl;
	}
}
void solve(int j, int n, int *a, bool*check){
	if(j >= n){
		for(int i = 0 ; i < n; ++i)
			cout<<a[i]<<"\t";
		cout<<endl;
	}
	for(int i = 1; i <= n; ++i){
		if(check[i] == false){
			check[i] = true;
			a[j] = i;
			solve(j+1, n, a, check);
			check[i] = false;
		}
	}
}
void solve2(int n, int *a){
	int j;
	for(int i = 0; i < n; ++i)
		cout<<s[a[i]]<<"\t";
	cout<<endl;
	while(true){
		j = n-1;
		while(a[j-1] > a[j]){
			--j;
			if(j == 1)
				break;
		}
		if(j == 1)
			break;
		for(int i = n-1; i >= j; --i)
		{
			if(a[i] > a[j-1])
			{
				swap(a[i], a[j-1]);
				break;
			}
		}
		sort(a + j, a + n);
		for(int i = 0; i < n; ++i)
			cout<<s[a[i]]<<"\t";
		cout<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i = 0 ; i < n; ++i)
		a[i] = i;
	bool *check = new bool[n+1];
	memset(check, false, sizeof(check));
	//solve(0, n, a, check);
	//sinh(n, a);
	solve2(n, a);
	return 0;
}


