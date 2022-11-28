#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
long long convertNumber(long long a, long long b)// 123 2
{
    if(a <= b)
    	return 0;
	vector<int> vt;
    int faker = a;
    while(faker != 0){
    	vt.push_back(faker%10);
    	faker /= 10;
	}
	reverse(vt.begin(), vt.end());
	int sum = accumulate(vt.begin(), vt.end(), 0);
	if(sum <= b)
		return 0;
	else{
		 if(a <= 9){
		 	vt[0] = b;
		 	vt.push_back(0);
		 	long long kq = 0;
		 	int j = 0;
			 for(int i = vt.size()-1; i >= 0; --i){
		 		kq += vt[j]*pow(10, i);
		 		++j;
			 }
			return kq-a;
		 }
		 for(int i = vt.size()-1; i >= 1; --i){
		 	if(accumulate(vt.begin(), vt.end(), 0) > b){
		 		vt[i] = 0;
		 		vt[i-1] += 1;
			 }
		 }
		 if(accumulate(vt.begin(), vt.end(), 0) <= b){
		 	long long kq = 0;
		 	int j = 0;
			 for(int i = vt.size()-1; i >= 0; --i){
		 		kq += vt[j]*pow(10, i);
		 		++j;
			 }
			return kq-a;
		 }
		 else{
		 	vt.push_back(0);
		 	vt[0] = 1;
		 	long long kq = 0;
		 	int j = 0;
			 for(int i = vt.size()-1; i >= 0; --i){
		 		kq += vt[j]*pow(10, i);
		 		++j;
			 }
			return kq-a;
		 }
	}
	
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long a, b;
	cin>>a>>b;
	cout<<convertNumber(a, b);
	return 0;
}


