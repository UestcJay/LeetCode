#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int res = nums[0]+nums[1]+nums[2];
		int dif = abs(res - target);

		for (int i = 0; i < int(nums.size() - 2); ++i) {
			int left = i + 1, right = nums.size() - 1;
			while (left < right)
			{
				int sum = nums[i] + nums[left] + nums[right];
				if (abs(sum - target) < dif)
				{
					dif = abs(sum - target);
					res = sum;
				}
				if (sum < target)
					++left;
				else --right;
			}
		}
		return res;
	}
};