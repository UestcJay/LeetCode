#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		int n = nums.size();
		for (int i = 0; i < n-3; ++i)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < n - 2; ++j)
			{
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;
				int left = j + 1, right = n - 1, sum = target - nums[j] - nums[i];
				while (left < right)
				{
					if (nums[left] + nums[right] == sum)
					{
						res.push_back({ nums[i],nums[j],nums[left],nums[right] });
						while (left < right&&nums[left] == nums[left + 1])
							left++;
						while (left < right&&nums[right] == nums[right - 1])
							right--;
						left++;
						right--;
					}
					else if (nums[left] + nums[right] < sum)
						left++;
					else
						right--;
				}
			}

		}
		return res;
	}
};