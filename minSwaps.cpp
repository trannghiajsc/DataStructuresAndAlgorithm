#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> arr = {0, 1, 1};
	int odd = 0, even = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(i %2 == 0 && arr[i] % 2 != 0) even++;
        if(i %2 != 0 && arr[i] % 2 == 0) odd++;
    }
    if(odd == even) cout << odd;
    else cout<< -1;
	return 0;
}


