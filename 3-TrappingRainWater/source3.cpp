/**
 * @Date    : 2021-12-19 23:06:31
 * @Author  : aerma7309
 * @problem : https://leetcode.com/problems/trapping-rain-water/
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
    int trap(vector<int> &height)
    {
        int waterTrapped = 0;
        stack<int> stk;
        for (int idx = 0; idx < height.size(); idx++)
        {
            while (stk.size() && height[stk.top()] <= height[idx])
            {
                int top = stk.top();
                stk.pop();
                if (stk.empty())
                    break;
                int boundedHeight = min(height[idx], height[stk.top()]) - height[top];
                int boundedWidth = idx - stk.top() - 1;
                waterTrapped += boundedHeight * boundedWidth;
            }

            stk.push(idx);
        }
        return waterTrapped;
    }
};