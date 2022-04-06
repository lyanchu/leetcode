/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        //判断是否为空
        if (nums.empty()) {
            return 0;
        }
        //判断是否只有一个元素
        if (size == 1) {
            return nums[0];
        }

        vector<int> dp = vector<int>(size, 0);
        //初始化dp数组
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]); //两个选金额大的
        for(int i = 2; i < size; i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]); 
        }
        return dp[size-1];
    }
};
// @lc code=end

