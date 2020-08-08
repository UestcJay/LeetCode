#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	void nextPermutation(vector<int> &num) {
		int i, j, n = num.size();
		for (i = n - 2; i >= 0; --i)
		{
			if (num[i + 1] > num[i])
			{
				for (j = n - 1; j >= 0; --j)
				{
					if (num[j] > num[i])
					{
						swap(num[i], num[j]);
						reverse(num.begin() + i+1, num.end());
						return;
					}
				}
			}

		}
		reverse(num.begin(), num.end());

	}
};