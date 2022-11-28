#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100001], b[400004];
void build(int id, int l, int r){
	if(l == r){
		b[id] = a[l];
		return;
	}
	int mid = (l+r)/2;
	build(id*2, l, mid);
	build(id*2+1, mid+1, r);
	b[id] = min(b[id*2], b[id*2+1]);
}
int get(int id, int l, int r, int u, int v){
	if(l > v || r < u)	return INT_MAX;
	if(l >= u && r <= v)
		return b[id];
	int mid = (l+r)/2;
	return min(get(id*2, l, mid, u, v), get(id*2+1, mid+1, r, u, v));
}
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(0) ; cout.tie(0);
	int n, t, u, v;
	cin>>n;
	for(int i = 0 ; i < n; ++i)	cin>>a[i];
	cin>>t;
	build(1, 0, n-1);
	while(t--){
		cin>>u>>v;
		cout<<get(1, 0, n-1, u, v)<<endl;
	}
	return 0;
}

