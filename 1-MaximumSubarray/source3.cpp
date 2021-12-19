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
        vector<int> MS(arr.size(), 0);
        MS[0] = arr[0];
        int result = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            MS[i] = max(MS[i - 1] + arr[i], arr[i]);
            result = max(MS[i], result);
        }
        return result;
    }
};
