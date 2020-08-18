class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> res;
		vector<int> out;
		sort(candidates.begin(), candidates.end());
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
			if (i > start&& candidates[i] == candidates[i - 1])
				continue;

			out.push_back(candidates[i]);
			dfs(res, out, candidates, i + 1, target - candidates[i]);
			out.pop_back();
		}
	}
};