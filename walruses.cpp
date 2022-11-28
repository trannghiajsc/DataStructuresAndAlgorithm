#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

std::vector<int> sol(std::vector<int> a)
{
    int pos;
    vector<int> vt;
    for(int i = 0; i < a.size(); ++i){
        pos = i;
        for(int j = a.size()-1; j > i; --j){
            if(a[j] < a[i]){
                pos = j;
                break;
            }
        }
        if(pos != i)
            vt.push_back(pos-i-1);
        else
            vt.push_back(-1);
    }
    return vt;
}
int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> a = {10,4,6,3,2,8,15};
	for(auto x : sol(a))
		cout<<x<<" ";
	return 0;
}


