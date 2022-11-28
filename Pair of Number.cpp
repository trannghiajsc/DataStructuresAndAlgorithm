#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
void counterPoN(int l, int r, int k)
{
    int count = 0;
    for(int i = ceil(sqrt(l)); i <= (int)sqrt(r); ++i){//2 121 5
        for(int j = ceil(pow(l, 1.0/3)); j <= (int)pow(r, 1.0/3); ++j){
            if(abs(i*i-j*j*j) <= k){
            	++count;
            	cout<<i<<" "<<j<<endl;
            }
        }
    }
    //if(count == 0) return -1;
    //else return count;
}//Tran Nghia
int main()
{
	ios_base::sync_with_stdio(0);
	int l ,r ,k;
	cin>>l>>r>>k;
	cout<<endl<<ceil(sqrt(2))<<endl;
	cout<<(int)pow(2, 1.0/3)<<endl;
	counterPoN(l, r, k);
	return 0;
}


