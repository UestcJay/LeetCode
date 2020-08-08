#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		vector<int> out;
		int n = nums.size();
		vector<int> visit(n, 0);
		dfs(res, out, 0, visit,nums);
		return res;
		
	}
	void dfs(vector<vector<int>>& res, vector<int>& out, int level, vector<int>& visit, vector<int>& nums)
	{
		if (level == nums.size())
		{
			res.push_back(out);
			return;
		}
		for (int i = 0; i < nums.size(); ++i)
		{
			if (visit[i] == 1)
				continue;
			out.push_back(nums[i]);
			visit[i] = 1;
			dfs(res, out, level + 1, visit, nums);
			visit[i] = 0;
			out.pop_back();
		}
	}

};