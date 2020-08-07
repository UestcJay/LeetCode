#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	int trap(vector<int>& height) {
		int res = 0, mx = 0,n=height.size();
		vector<int>dp(n, 0);
		for (int i = 0; i < n; ++i)
		{
			dp[i] = mx;
			mx = max(mx, height[i]);
		}
		mx = 0;
		for (int j = n - 1; j >= 0; --j)
		{
			dp[j]= min(dp[j], mx);
			mx = max(height[j], mx);
			if (dp[j] > height[j])
				res += dp[j] - height[j];
		}
		return res;

	}
};