#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int x, y;
	vector<int> a;
	cin>>x>>y;
	int sum = x+y;
	if(y == 1){
		a.push_back(3);
		a.push_back(3);
	}
	else{
			for(int i = 2; i <= y; ++i){
		if(y % i == 0){
			if((i+2)*(y/i+2) == sum)
			{
				if(i+2 > y/i+2)
				{
					a.push_back(i+2);
					a.push_back(y/i+2);
					break;
				}
				else{
					a.push_back(y/i+2);
					a.push_back(i+2);
					break;
				}
			}	
		}
	}
	}
	 for (auto it = a.cbegin(); it != a.cend(); it++) {
        cout << *it << ' ';
    }
	return 0;
}


