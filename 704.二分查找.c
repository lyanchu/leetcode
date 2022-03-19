/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize -1;//最末位
    while(left <= right){
        int middle = left + ((right - left) / 2);
        //防止溢出，效果和(left+right)/2一样
        if(target == nums[middle])
          return middle;
        //正好在中间
        else if(target > nums[middle])
          left = middle + 1;
        //target位于右侧，在右侧继续进行二分查找
        else
        //target位于左侧
          right = middle -1;
    }
    return -1;
}
// @lc code=end

