/*给定一个未经排序的整数数组，找到最长且 连续递增的子序列，并返回该序列的长度。

连续递增的子序列 可以由两个下标 l 和 r（l < r）确定，如果对于每个 l <= i < r，
都有 nums[i] < nums[i + 1] ，
那么子序列 [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] 就是连续递增子序列。*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
          if(nums.size() <= 1)
            return nums.size();
        int mark =1;
        int ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                mark++;
                else{
            mark =1;
                }
       ans = mark > ans ? mark : ans;
        }
    
        return ans;
    }
};

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int result = 1;
        vector<int> dp(nums.size() ,1);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) { // 连续记录
                dp[i] = dp[i - 1] + 1;
            }
            if (dp[i] > result) result = dp[i];
        }
        return result;
    }
};
