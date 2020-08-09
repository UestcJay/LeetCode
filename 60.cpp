#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	string getPermutation(int n, int k) {
		string num = "123456789";
		vector<int> f(n, 1);
		string s;
		for (int i = 1; i < n; ++i)
		{
			f[i] = f[i - 1] * i;
		}
		--k;
		for (int i = n - 1; i >= 0; --i)
		{
			int j = k / f[i];
			k = k % f[i];
			s.push_back(num[j]);
			num.erase(j, 1);

		}
		return s;

	}


};