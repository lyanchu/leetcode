/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        //斐波那契数列
        if(n <= 1) return n;
        int dp[3];
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= n; i++){
            int sum = dp[1] + dp[2];
            dp[1] = dp[2];
            dp[2] = sum;
        }
        return dp[2];
    }
};
// @lc code=end

