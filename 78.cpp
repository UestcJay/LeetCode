class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> res;
		vector<int>out;
		sort(nums.begin(), nums.end());
		dfs(res, out, 0, nums);
		return res;

	}
	void dfs(vector<vector<int>>& res, vector<int>& out, int pos, vector<int>& nums)
	{
		res.push_back(out);
		for (int i = pos; i < nums.size(); ++i)
		{
			out.push_back(nums[i]);
			dfs(res, out, i + 1, nums);
			out.pop_back();
		}
	}
};