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
        int totalTrappedWater = 0, waterCollected;
        for (int i = 0; i < height.size(); i++)
        {
            int leftMax = 0, rightMax = 0;
            for (int idx = i - 1; idx >= 0; idx--)
                leftMax = max(leftMax, height[idx]);

            for (int idx = i + 1; idx < height.size(); idx++)
                rightMax = max(rightMax, height[idx]);

            waterCollected = min(leftMax, rightMax) - height[i];
            if (waterCollected > 0)
                totalTrappedWater += waterCollected;
        }

        return totalTrappedWater;
    }
};