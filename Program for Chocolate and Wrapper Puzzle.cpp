#include <bits/stdc++.h>

using namespace std;

int solve(int money, int wrap) {
    // Add your solution here
    if(money < wrap)
    	return 0;
    else{
    	return money/wrap  + solve(money/wrap + money%wrap, wrap);
	}
}
int f(int money, int price, int wrap){
	return money/price + solve(money/price+money%price, wrap);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int money, price, wrap;//16 2 2
    cin>>money>>price>>wrap;
    cout<<f(money, price, wrap);
    return 0;
}

