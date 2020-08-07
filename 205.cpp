#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	bool isIsomorphic(string s, string t) {
		unordered_map<int, int> m1, m2;
		int n = s.size();
		for (int i = 0; i < n; ++i)
		{
			if (m1[s[i]] != m2[t[i]])
				return false;
			m1[s[i]] = i + 1;
			m2[t[i]] = i + 1;
		}
		return true;
	}
};