/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

//其中一种解法思路和二分查找类似，优先查找是否有相同元素，和二分查找不同的是，搜索插入位置一定有一个位置会返回；
//当不存在该值时，返回插入位置正好是此时的left
int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize -1;
    while(left <= right){
        int middle = left + ((right - left)/2);
        if(target == nums[middle]){
            return middle;
        }
        else if(target < nums[middle]){
            right = middle -1;
        }
        else{
            left = middle + 1;
        }
    }
    return left;
}
// @lc code=end

