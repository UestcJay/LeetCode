
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int cur = 0, pre = 0, n = nums.size();
		while (cur < n)
		{
			if (nums[pre] == nums[cur])
				++cur;
			else
				nums[++pre] = nums[cur++];
		}
		return nums.empty() ? 0 : pre + 1;
	}
};