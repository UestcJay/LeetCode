class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int id = search(nums, 0, nums.size(), target);
		if (id == -1)
			return{ -1,-1 };
		int left = id, right = id;
		while (left > 0 && nums[left - 1] == nums[id])
			left--;
		while (right < nums.size() - 1 && nums[right + 1] == nums[id])
			right++;
		return { left,right };

	}
	int search(vector<int>& nums, int left, int right, int target)
	{
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] == target)
				return mid;
			else if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid;
		}
		return -1;
	}
};