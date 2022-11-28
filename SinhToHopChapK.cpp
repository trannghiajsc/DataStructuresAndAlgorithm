#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
void Gener(vector<int> vt, map<int, string> mp){
	int k = vt.size();
	while(true){
		int i = k-1;
		for(auto &x : vt)
			cout<<mp[x]<<" ";
		cout<<"\n\n";
		while(i >= 0 && vt[i] == 6-k+i+1) --i;
		if( i < 0) break;
		else{
			vt[i] = vt[i]+1;
			for(int j = i +1; j < k; ++j){
				vt[j] = vt[j-1]+1;
			}
		}
	}	
}
int main()
{
	ios_base::sync_with_stdio(0);//1 Nghia,  2 Manh,  3 Quang,  4 Duy, 5 Thang
	vector<int> vt(4);
	map<int, string> mp;
	mp[1] = "Nghia";
	mp[2] = "Manh";
	mp[3] = "Quang";
	mp[4] = "Duy";
	mp[5] = "Thang";
	mp[6] = "Phuong";
	for(int i = 0; i <= vt.size(); ++i) vt[i] = i+1;
	Gener(vt, mp);
	return 0;
}


