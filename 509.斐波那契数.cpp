/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
         /* 递归
       if(n < 2) return n;
        return fib(n-1)+fib(n-2); 
        */

       //动态规划
        if(n < 2) return n;
        int dp[2];
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2;i <= n; i++){
            int sum = dp[0] + dp [1];
            //只需要维护这两个数组
            dp[0] = dp[1];
            dp[1] = sum;            
        }
        return dp[1];
    }
};
// @lc code=end

