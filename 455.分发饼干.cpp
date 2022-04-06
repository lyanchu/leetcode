/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int index = s.size() - 1;   //饼干数组下标
        int result = 0;
        //从大到小
        for(int i = g.size()-1; i >= 0; i--){ //胃口下标
            if(index >= 0 && s[index] >= g[i]){ //饼干尺寸大于等于胃口，才能尽量多满足
                index --;
                result ++;
            }
        }
        return result;
    }
};
// @lc code=end

