#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	string s = "man i need a taxi up to ubud";
	int x = s.size(), i = 0, sum, maxfake = 0, start;
	string faker;
	while(i < x){
		sum = 0;
		start = i;
		while(s[i] != ' '){
			sum += s[i]-'a'+1;
			++i;
		}
		maxfake = max(maxfake, sum);
		if(maxfake == sum){
			faker = "";
			for(int j = start; j < i; ++j)
				faker += s[j];	
		}
		++i;
	}
	cout<<faker<<endl;
	cout<<maxfake;
	return 0;
}


