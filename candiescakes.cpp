#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> candies = {1,9,2,1,3,6,7,9,3,3,4,10,10,8,2}, cakes = {3,8,7,8,5,4,1,1,7,4,10,1,2,10,2};//4 +4 + 1 +1 + 3 +1
	int minCandies = INT_MAX, minCakes = INT_MAX, count = 0;
	for(auto x : candies)
		minCandies = min(minCandies, x);
	for(auto x : cakes)
		minCakes = min(minCakes, x);
	for(int i = 0 ; i < candies.size(); ++i){
		if(candies[i] == minCandies && cakes[i] == minCakes)
			continue;
		if(candies[i] > minCandies && cakes[i] > minCakes){
			int faker = min(candies[i]-minCandies, cakes[i]-minCakes);
			count += faker;
			candies[i] -= faker;
			cakes[i] -= faker;
			if(candies[i] > minCandies){
				count += candies[i]-minCandies;
				candies[i] = minCandies;
			}
			if(cakes[i] > minCakes){
				count += cakes[i]-minCakes;
				cakes[i] = minCakes;
			}
		}
		if(candies[i] > minCandies && cakes[i] == minCakes){
			count += candies[i]-minCandies;
			candies[i] = minCandies;
		}
		if(cakes[i] > minCakes && candies[i] == minCandies){
			count += cakes[i]-minCakes;
			cakes[i] = minCakes;
		}
	}
	cout<<count;	
	return 0;
}


