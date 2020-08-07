#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
	int maxArea(vector<int>& height) {
		int res = 0, i = 0, j = height.size() - 1;
		while (i < j)
		{
			res = max(res, min(height[i], height[j])*(j - i));
			if (height[i] > height[j])
				j--;
			else
				i++;
		}
		return res;
	}
};