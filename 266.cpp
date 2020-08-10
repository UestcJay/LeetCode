class Solution {
public:
	bool canPermutePalindrome(string s) {
		unordered_map<char, int> m;
		int cnt = 0;
		for (auto a : s) ++m[a];
		for (auto a : m) {
			if (a.second % 2 == 1) ++cnt;
		}
		return cnt == 0 || (s.size() % 2 == 1 && cnt == 1);
	}
};