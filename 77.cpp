#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> res;
		vector<int> out;
		dfs(n, k, res, out,1);
		return res;
	}
	void dfs(int n, int k, vector<vector<int>>& res, vector<int>& out,int l)
	{
		if (out.size() == k)
		{
			res.push_back(out);
			return;
		}
		for (int i = l; i <= n; ++i)
		{
			out.push_back(i);
			dfs(n, k, res, out, l + 1);
			out.pop_back();
		}
	}
};