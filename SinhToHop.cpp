#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;//k = 4, n = 10 ; 1 2 4 5;   7 8 9 10
void Gener(vector<int> vt, int k, int n){
	int i = vt.size()-1;
	while(i != -1){
		i = vt.size()-1;
		for(auto &x : vt)
			cout<<x<<" ";
		cout<<endl;
		while(i >= 0 && vt[i] == n-k+i+1)
			--i;
		if(i == -1)
			break;
		else{
			++vt[i];
			for(int j = i +1; j < vt.size(); ++j){
				vt[j] = vt[j-1]+1;
			}
		}
	}	
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n, k;
	cin>>k>>n;
	vector<int> vt(k);
	for(int i = 0; i < k ; ++i)
		vt[i] = i+1;
	Gener(vt, k, n);
	return 0;
}


