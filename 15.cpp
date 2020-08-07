#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		if (nums.empty() || nums.back() < 0 || nums.front() > 0)
			return {};
		for (int i = 0; i < (int)nums.size()-2; ++i)
		{
			if (nums[i] > 0)
				break;
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int target = 0 - nums[i]; 
			int j = i + 1, k = (int)nums.size() - 1;
			while (j < k)
			{
				if (nums[j] + nums[k] == target)
				{
					res.push_back({ nums[i],nums[j],nums[k] });
					while (j < k&&nums[j] == nums[j + 1])
						++j;
					while (j < k && nums[k] == nums[k - 1])
						--k;
					--k;
					++j;
				}
				else if (nums[j] + nums[k] < target)
					++j;
 				else
					--k;
				
			}
		}
		return res;
	}
};