#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
int minConvert(int n, int m)
{
    if(n == m)
        return 0;
    if(n == 0)
        return -1;
    int cnt = 0;
    while(m > n){
    	if(m % 2 == 0){
    		m /= 2;
    		++cnt;
		}
		else{
			m += 1;
			++cnt;
		}
	}
	return cnt + n-m;
}//Tran Nghia
int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin>>n>>m;
	cout<<minConvert(n, m);
	return 0;
}


