class Solution {
public:
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<vector<int>> res;
		vector<int> out;
		dfs(res, out, n, k, 1);
		return res;

	}
	void dfs(vector<vector<int>>& res, vector<int>& out, int n, int k, int level)
	{
		if (n < 0)
			return;
		if (n == 0 && out.size() == k)
		{
			res.push_back(out);
			return;
		}
		for (int i = level; i <= 9; ++i)
		{
			out.push_back(i);
			dfs(res, out, n - i, k, i + 1);
			out.pop_back();
		}
	}
};