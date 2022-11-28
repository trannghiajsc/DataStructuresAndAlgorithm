#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
int countOfTimes(int h, int d, int m, string S)
{
    int year = stoi(S), tong = 24;
    if(m > 12 || m == 0)
    	return -1;
    
    if(year % 100 == 0 && year % 400 == 0 || year % 4 == 0){
    	if(m == 2){
    		tong = tong*29;
    		return tong/h + tong/d/24;
		}
	}
	else{
		if(m == 2){
    		tong = tong*28;
    		return tong/h + tong/d/24;
		}
	}
    if(m == 1 || m == 3 || m == 5 || m ==7 || m == 8 || m == 10 || m == 12)
    	tong = tong*31;
    else
    	tong = tong*30;
    return tong/h + tong/d/24;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int h = 6, d = 6, m = 2;
	string S = "2016";
	cout<<countOfTimes(h, d ,m ,S);
	return 0;
}


