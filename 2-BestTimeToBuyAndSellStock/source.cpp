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
        int maxProfit = 0, cp = prices[0], profit = 0;
        for (auto &sp : prices)
        {
            profit = sp - cp;
            if (profit > maxProfit)
                maxProfit = profit;
            if (sp < cp)
                cp = sp;
        }
        return maxProfit;
    }
};