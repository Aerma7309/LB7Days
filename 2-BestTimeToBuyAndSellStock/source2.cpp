/**
 * @Date    : 2021-12-19 21:38:46
 * @Author  : aerma7309 
 * @problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

#include <bits/stdc++.h>
using namespace std;
int FastIO = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0, profit = 0;

        for (int cpi = 0; cpi < prices.size(); cpi++)
        {
            for (int spi = cpi + 1; spi < prices.size(); spi++)
            {
                profit = prices[spi] - prices[cpi];
                if (profit > maxProfit)
                    maxProfit = profit;
            }
        }

        return maxProfit;
    }
};