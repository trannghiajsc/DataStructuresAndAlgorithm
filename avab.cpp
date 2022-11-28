#include<bits/stdc++.h>
using namespace std;

void solve(int j, int n, char *c){// aaa-bbb
	if(j >= n){
		for(int i = 0 ; i < n; ++i)
			cout<<c[i];
		cout<<endl;
		return;
	}
	for(char i = 'a' ; i <= 'b'; ++i){
		c[j] = i;
		solve(j+1, n, c);
	}

}
int main()
{
	int n;
	cin>>n;
	char *c = new char[n];
	solve(0 ,n, c);
	delete[] c;
	return 0;
}
