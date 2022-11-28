#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
void Gener(vector<int> vt){
	int n = vt.size();
	while(true){
		for(auto &x : vt)
			cout<<x<<" ";
		cout<<endl;
		bool check = false;
		for(int i = n-1; i >= 0; --i){
			if(vt[i] == 0){
				check = true;
				vt[i] = 1;
				for(int j = i +1; j < n ; ++j){
					vt[j] = 0;
				}
				break;
			}
		}
		if(check == false)
			break;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; ++i) vt[i] = 0; 
	Gener(vt);
	return 0;
}


