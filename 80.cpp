#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;


	int removeDuplicates(vector<int>& nums) {
		int n = nums.size(), cnt = 1, cur = 0;
		for (int i = 1; i < n; ++i)
		{
			if (nums[i] == nums[cur] && cnt == 0)
				continue;
			else
			{
				if (nums[i] == nums[cur])
					cnt--;

				else cnt = 1;
				nums[++cur] = nums[i];
			}
		}
		return nums.empty() ? 0 : cur + 1;

	}
	int main()
	{
		vector<int> n = {1,1,1,2,2,3};
		removeDuplicates(n);
	}