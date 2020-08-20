class Solution {
public:
	string longestPalindrome(string s) {
		if (s.empty())
			return "";
		int n = s.size(), dp[1010][1010] = { 0 }, left = 0, len = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				dp[j][i] = (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]));
				if (dp[j][i] && i - j + 1 > len)
				{
					len = i - j + 1;
					left = j;

				}
			}
		}
		return s.substr(left, len);
	}
};