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
        vector<int> leftMax(height.size()), rightMax(height.size());

        for (int i = 1; i < height.size(); i++)
            leftMax[i] = max(leftMax[i - 1], height[i - 1]);

        for (int i = height.size() - 2; i >= 0; i--)
            rightMax[i] = max(rightMax[i + 1], height[i + 1]);

        int totalTrappedWater = 0, waterCollected;
        for (int i = 0; i < height.size(); i++)
        {
            waterCollected = min(leftMax[i], rightMax[i]) - height[i];
            if (waterCollected > 0)
                totalTrappedWater += waterCollected;
        }

        return totalTrappedWater;
    }
};