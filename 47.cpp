#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> res;
		vector<int> out, visited(nums.size(), 0);
		sort(nums.begin(), nums.end());
		permuteUniqueDFS(nums, 0, visited, out, res);
		return res;
	}
	void permuteUniqueDFS(vector<int>& nums, int level, vector<int>& visited, vector<int>& out, vector<vector<int>>& res) {
		if (level == nums.size()) 
		{ res.push_back(out); return; }
		for (int i = 0; i < nums.size(); ++i) {
			if (visited[i] == 1) 
				continue;
			if (i > 0 && nums[i] == nums[i - 1] && visited[i - 1] == 0) 
				continue;
			visited[i] = 1;
			out.push_back(nums[i]);
			permuteUniqueDFS(nums, level + 1, visited, out, res);
			out.pop_back();
			visited[i] = 0;
		}
	}
};
int main()
{
	Solution s;
	vector<int> n{ 1,2,2 };
	s.permuteUnique(n);
	return 0;
}