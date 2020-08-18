class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> res;
		vector<int> out;
		dfs(res, out, candidates, 0, target);
		return res;

	}
	void dfs(vector<vector<int>>& res, vector<int>& out, vector<int>& candidates, int start, int target)
	{
		if (target < 0)
			return;
		if (target == 0)
		{
			res.push_back(out);
			return;
		}
		for (int i = start; i < candidates.size(); ++i)
		{
			out.push_back(candidates[i]);
			dfs(res, out, candidates, i, target - candidates[i]);
			out.pop_back();
		}
	}
};