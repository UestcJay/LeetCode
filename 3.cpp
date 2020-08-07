#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int res = 0, n = s.size(), left = -1;
		unordered_map<int, int> m;
		for (int i = 0; i < n; ++i)
		{
			if (m.count(s[i]) && m[s[i]] > left)
			{
				left = m[s[i]];
			}
			m[s[i]] = i;
			res = max(res, i - left);
		}
		return res;
	}
};