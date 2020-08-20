class Solution {
public:
	string longestPalindrome(string s) {
		if (s.size() < 2) return s;
		int start = 0, maxl = 0, n = s.size();
		for (int i = 0; i < n - 1; ++i)
		{
			help(s, i, i, start, maxl);
			help(s, i, i + 1, start, maxl);
		}
		return s.substr(start, maxl);
	}
	void help(string s, int left, int right, int& start, int& maxl)
	{
		while (left >= 0 && right < s.size() && s[left] == s[right])
		{
			left--;
			right++;
		}
		if (maxl < right - left - 1)
		{
			maxl = right - left - 1;
			start = left + 1;
		}
	}
};