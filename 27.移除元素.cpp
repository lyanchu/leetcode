/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int slowindex = 0; //定义慢指针
        for(int fastindex = 0;fastindex < size;fastindex++){ //定义快指针
            if(val != nums[fastindex]){ //如果发现需要移除的元素，快指针前进，慢指针不动
                nums[slowindex++] = nums[fastindex]; 
            }
        }
        return slowindex; //最后慢指针的位置就是数组的新长度，元素的相对位置没有该变
    }
};
// @lc code=end

