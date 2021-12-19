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
    int maxSubArray(vector<int> &arr)
    {
        int n = arr.size();
        int maxSum = INT_MIN;

        for (int i = 0; i <= n - 1; i++)
        {
            int currSum = 0;
            for (int j = i; j <= n - 1; j++)
            {
                currSum += arr[j];
                if (currSum > maxSum)
                {
                    maxSum = currSum;
                }
            }
        }

        return maxSum;
    }
};
