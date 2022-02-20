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
        int totalTrappedWater = 0, trappedWater = 0, leftMax = 0, rightMax = 0;
        for (int left = 0, right = height.size() - 1; left < right;)
        {
            if (height[left] <= height[right])
            {
                trappedWater = min(leftMax, height[right]) - height[left];
                leftMax = max(leftMax, height[left]);
                left++;
            }
            else
            {
                trappedWater = min(rightMax, height[left]) - height[right];
                rightMax = max(rightMax, height[right]);
                right--;
            }
            if (trappedWater > 0)
                totalTrappedWater += trappedWater;
        }

        return totalTrappedWater;
    }
};