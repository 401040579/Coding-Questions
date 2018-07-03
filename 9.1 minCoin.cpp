#include<iostream> 
#include<climits>
#include <vector>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

//rec
int minCoin(int nums[], int amount, int length)
{
	if (amount == 0) return 0;

	int res = INT_MAX;

	for (int i = 0; i< length; i++)
	{
		if (nums[i] <= amount)
			res = min(minCoin(nums, amount - nums[i], length) + 1, res);
	}

	return res;
}

int minCoin_nonrec(int nums[], int amount, int length)
{
	if (amount == 0) return 0;

	int *dp = new int[amount + 1];

	for (int i = 0; i < amount + 1; i++)
	{
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	/* [1,2,5] 13
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 2;
	*/
	for (int i = 1; i <= amount; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (nums[j] <= i)
			{
				int sub_res = dp[i - nums[j]];
				dp[i] = min(dp[i - nums[j]] + 1, dp[i]);
			}
		}
	}
	if (dp[amount] > amount || dp[amount] < 0)
		return -1;
	else
		return dp[amount];
}

int main()
{
	int nums[] = { 1,2,5 };
	int amount = 13;
	int coin = 0;
	int length = sizeof(nums) / sizeof(int);
	//coin = minCoin(nums, amount, length);
	coin = minCoin_nonrec(nums, amount, length);
	cout << coin << "\n";
	return 0;
}
