#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;



/*
1 5 2 4 5 7 8 9 6 10 4 5 7 15 14
*/
void dp(int *a, int *len, int *truyvet){
	for(int i = 1; i < 15; ++i){
		truyvet[i] = -1;
		for(int j = i-1; j >=0; --j){
			if(a[i] > a[j]){
				int check = len[i];
				len[i] = max(len[i], len[j]+1);
				if(check != len[i])
					truyvet[i] = j;
			}
		}
	}
	for(int i = 0 ; i < 15; ++i){
		cout<<truyvet[i]<<" ";
	}
	while(true){
		int temp;
		for(int i = 0; i < 15; ++i){
			if(len[i] == len[14]){
				temp = i;
				break;
			}
		}
		vector<int> v;
		int i = temp;
		while(i > -1){
			v.push_back(a[i]);
			i = truyvet[i];
		}
		reverse(v.begin(), v.end());
		cout<<endl<<"truy vet: "<<endl;
		for(auto x : v){
			cout<<x<<" ";
		}
		break;
	}
	cout<<endl;
	cout<<"Do dai: "<<len[14];
}
int main(){
 	ios_base::sync_with_stdio(false);
	int *a = new int[15];
	int *len = new int[15];
	int *truyvet = new int[15];
	for(int i = 0 ; i < 15; ++i){
		cin>>a[i];
		len[i] = 1;
	}
	truyvet[0] = -1;
	dp(a, len, truyvet);
	delete []a;
	delete []len;
	delete []truyvet;
	return 0;
}
/* Main() Ends Here */


