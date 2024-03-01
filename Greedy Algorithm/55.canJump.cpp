/*给你一个非负整数数组 nums ，你最初位于数组的 第一个下标 。
数组中的每个元素代表你在该位置可以跳跃的最大长度。

判断你是否能够到达最后一个下标，如果可以，返回 true ；否则，返回 false 。

 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover =0;
        if (nums.size() == 1) return true; // 只有一个元素，就是能达到
        for(int i=0;i<=cover;i++){
            cover = max(i+nums[i],cover);
            if(cover>=nums.size()-1) return true;
        }
        return false;
    }
};