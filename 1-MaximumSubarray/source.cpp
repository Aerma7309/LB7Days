/**
 * @Date    : 2021-12-19 18:41:58
 * @Author  : aerma7309 
 * @problem : https://leetcode.com/problems/maximum-subarray/
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
    int maxSubArray(vector<int> &nums)
    {
        int globalMax = 0, localMax = 0;
        bool allNegative = true;
        for (auto &num : nums)
        {
            localMax = max(localMax + num, 0);
            globalMax = max(globalMax, localMax);
            if (allNegative and num > 0)
                allNegative = false;
        }
        if (allNegative)
            return *max_element(nums.begin(), nums.end());
        return globalMax;
    }
};
