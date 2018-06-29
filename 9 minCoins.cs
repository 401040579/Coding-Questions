using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace minCoins
{
    class Program
    {
        //rec
        private static int minCoin(int[] nums, int amount)
        {
            if (amount == 0) return 0;

            int res = int.MaxValue;

            for(int i = 0;i< nums.Length; i++)
            {
                if (nums[i] <= amount)
                    res = Math.Min(minCoin(nums, amount - nums[i]) + 1, res);
            }

            return res;
        }

        //non-rec
        private static int minCoin_nonrec(int[] nums, int amount)
        {
            if (amount == 0) return 0;

            int[] dp = new int[amount + 1];
            for (int i = 0; i < dp.Length; i++)
            {
                dp[i] = int.MaxValue;
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
                for (int j = 0; j < nums.Length; j++)
                {
                    if (nums[j] <= i)
                    {
                        int sub_res = dp[i - nums[j]];
                        dp[i] = Math.Min(dp[i - nums[j]] + 1, dp[i]);
                    }
                }
            }
            if (dp[amount] > amount || dp[amount] < 0)
                return -1;
            else
                return dp[amount];
        }

        static void Main(string[] args)
        {
            int[] nums = {  1,2,5 };
            int amount = 13;
            int coin = 0;

            coin = minCoin(nums, amount);
            Console.WriteLine(coin);
        }

    }
}
