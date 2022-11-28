#include <bits/stdc++.h>
using namespace std;
 

void solve(int *c, int n, int m)
{
    int *t = new int[m + 1];
    t[0] = 0;
    for(int i = 1; i <= m; i++)
        t[i] = INT_MAX;
    for(int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++)
            if (c[j] <= i) {
                int temp = t[i - c[j]];
                if (temp != INT_MAX && temp + 1 < t[i])
                	t[i] = temp + 1;
            }
    }
    for(int i = 0 ; i <= m; ++i)
    	cout<<t[i]<<" ";
    cout<<endl;
    if (t[m] == INT_MAX)	cout<<"Khong doi duoc tien";
    else	cout<<"tong = "<<t[m];
    delete []t;
}
/*
4
9 6 5 1
11
*/
int main(){
	int n;
	cin>>n;
	int *c = new int[n+1];
	for(int i = 0 ; i < n; ++i)
		cin>>c[i];
	int m;
	cin>>m;
	solve(c, n, m);
	delete []c;
}
