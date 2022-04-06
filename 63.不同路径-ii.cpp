/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        //排除横纵第一行列有障碍物的网格，其余赋值为1
        for(int i = 0; i < m && obstacleGrid[i][0] == 0; i++) dp[i][0] = 1;
        for(int j = 0; j < n && obstacleGrid[0][j] == 0; j++) dp[0][j] = 1;
        //类似不同路径，左侧和上侧网格内数相加
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(obstacleGrid[i][j] == 1) continue; //跳过障碍物的网格
                dp[i][j] = dp[i-1][j] + dp[i][j-1];  //左侧和上侧网格内数相加
            }
            
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

