#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
int lengthOfLIS(vector<int>& nums, int k) {
   vector<int> dp(nums.size(), 1);
    for(int i = 1 ; i < nums.size(); ++i){
    	for(int j = 0; j < i; ++j){
    		if(nums[i] > nums[j] && (nums[i] -nums[j] <= k))
    			dp[i] = max(dp[i], dp[j]+1);
		}
	}
	int ans = INT_MIN;
	for(auto x : dp){
		ans = max(x, ans);
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> nums ={1,5};
	int k = 1;
	cout<<lengthOfLIS(nums, k);
	return 0;
}




